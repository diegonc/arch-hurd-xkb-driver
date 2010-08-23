#include <argp.h>
#include <fcntl.h>
#include <linux/input.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/* event or stdin? */
int read_from_stdin = 1;
char* device_node_path = 0;
int device_fd = -1;

/* stdio scancode reader. */
int
stdio_read_loop()
{
  int c;

  while ( (c = getc(stdin)) != EOF ) {
    putc(c, stdout);
    fflush(stdout);
  }
  
  exit(0);
}

/* event device node reader. */
const char*
event_type_name(struct input_event ev)
{
  switch (ev.type)
    {
    case EV_SYN: return "EV_SYN";
    case EV_KEY: return "EV_KEY";
    case EV_REL: return "EV_REL";
    case EV_ABS: return "EV_ABS";
    case EV_MSC: return "EV_MSC";
    case EV_SW: return "EV_SW";
    case EV_LED: return "EV_LED";
    case EV_SND: return "EV_SND";
    case EV_REP: return "EV_REP";
    case EV_FF: return "EV_FF";
    case EV_PWR: return "EV_PWR";
    case EV_FF_STATUS: return "EV_FF_STATUS";
    case EV_MAX: return "EV_MAX";
    case EV_CNT: return "EV_CNT";
    default:
      return "Unknown";
    }
}

void
emit_at_scancodes(struct input_event ev)
{
  unsigned char sc = 0;
  int extended = 0;

  switch (ev.code)
    {
    case KEY_RESERVED:
    case KEY_ESC:
    case KEY_1:
    case KEY_2:
    case KEY_3:
    case KEY_4:
    case KEY_5:
    case KEY_6:
    case KEY_7:
    case KEY_8:
    case KEY_9:
    case KEY_0:
    case KEY_MINUS:
    case KEY_EQUAL:
    case KEY_BACKSPACE:
    case KEY_TAB:
    case KEY_Q:
    case KEY_W:
    case KEY_E:
    case KEY_R:
    case KEY_T:
    case KEY_Y:
    case KEY_U:
    case KEY_I:
    case KEY_O:
    case KEY_P:
    case KEY_LEFTBRACE:
    case KEY_RIGHTBRACE:
    case KEY_ENTER:
    case KEY_LEFTCTRL:
    case KEY_A:
    case KEY_S:
    case KEY_D:
    case KEY_F:
    case KEY_G:
    case KEY_H:
    case KEY_J:
    case KEY_K:
    case KEY_L:
    case KEY_SEMICOLON:
    case KEY_APOSTROPHE:
    case KEY_GRAVE:
    case KEY_LEFTSHIFT:
    case KEY_BACKSLASH:
    case KEY_Z:
    case KEY_X:
    case KEY_C:
    case KEY_V:
    case KEY_B:
    case KEY_N:
    case KEY_M:
    case KEY_COMMA:
    case KEY_DOT:
    case KEY_SLASH:
    case KEY_RIGHTSHIFT:
    case KEY_KPASTERISK:
    case KEY_LEFTALT:
    case KEY_SPACE:
    case KEY_CAPSLOCK:
    case KEY_F1:
    case KEY_F2:
    case KEY_F3:
    case KEY_F4:
    case KEY_F5:
    case KEY_F6:
    case KEY_F7:
    case KEY_F8:
    case KEY_F9:
    case KEY_F10:
    case KEY_NUMLOCK:
    case KEY_SCROLLLOCK:
    case KEY_KP7:
    case KEY_KP8:
    case KEY_KP9:
    case KEY_KPMINUS:
    case KEY_KP4:
    case KEY_KP5:
    case KEY_KP6:
    case KEY_KPPLUS:
    case KEY_KP1:
    case KEY_KP2:
    case KEY_KP3:
    case KEY_KP0:
    case KEY_KPDOT:
      sc = ev.code;
      break;
    case KEY_ZENKAKUHANKAKU:
      /* none ? */
      return;
    case KEY_102ND:
    case KEY_F11:
    case KEY_F12:
      sc = ev.code;
      break;
    case KEY_RO:
    case KEY_KATAKANA:
    case KEY_HIRAGANA:
    case KEY_HENKAN:
    case KEY_KATAKANAHIRAGANA:
    case KEY_MUHENKAN:
    case KEY_KPJPCOMMA:
      /* none ? */
      return;
    case KEY_KPENTER:
      extended = 1;
      sc = 0x1c;
      break;
    case KEY_RIGHTCTRL:
      extended = 1;
      sc = 0x1d;
      break;
    case KEY_KPSLASH:
      extended = 1;
      sc = 0x35;
      break;
    case KEY_SYSRQ:
      /* none ? */
      return;
    case KEY_RIGHTALT:
      extended = 1;
      sc = 0x38;
      break;
    case KEY_LINEFEED:
    case KEY_HOME:
      extended = 1;
      sc = 0x47;
      break;
    case KEY_UP:
      extended = 1;
      sc = 0x48;
      break;
    case KEY_PAGEUP:
      extended = 1;
      sc = 0x49;
      break;
    case KEY_LEFT:
      extended = 1;
      sc = 0x4b;
      break;
    case KEY_RIGHT:
      extended = 1;
      sc = 0x4d;
      break;
    case KEY_END:
      extended = 1;
      sc = 0x4f;
      break;
    case KEY_DOWN:
      extended = 1;
      sc = 0x50;
      break;
    case KEY_PAGEDOWN:
      extended = 1;
      sc = 0x51;
      break;
    case KEY_INSERT:
      extended = 1;
      sc = 0x52;
      break;
    case KEY_DELETE:
      extended = 1;
      sc = 0x53;
      break;
    case KEY_MACRO:
    case KEY_MUTE:
    case KEY_VOLUMEDOWN:
    case KEY_VOLUMEUP:
      /* none ? */
      return;
    case KEY_POWER:
      extended = 1;
      sc = 0x5e;
    case KEY_KPEQUAL:  
    case KEY_KPPLUSMINUS:
      /* none ? */
      return;
    case KEY_PAUSE:
      putc(0xE1, stdout);
      putc(0x1d | (ev.value * 0x80), stdout);
      putc(0x45, stdout);
      return;
    case KEY_SCALE:
    case KEY_KPCOMMA:
    case KEY_HANGEUL:
    case KEY_HANJA:
    case KEY_YEN:
      /* none ? */
      return;
    case KEY_LEFTMETA:
      extended = 1;
      sc = 0x5b;
      break;
    case KEY_RIGHTMETA:
      extended = 1;
      sc = 0x5c;
      break;
    case KEY_COMPOSE:
    case KEY_STOP:
    case KEY_AGAIN:
    case KEY_PROPS:
    case KEY_UNDO:
    case KEY_FRONT:
    case KEY_COPY:
    case KEY_OPEN:
    case KEY_PASTE:
    case KEY_FIND:
    case KEY_CUT:
    case KEY_HELP:
      /* none ? */
      return;
    case KEY_MENU:
      extended = 1;
      sc = 0x5d;
      break;
    case KEY_CALC:
    case KEY_SETUP:
      /* none ? */
      return;
    case KEY_SLEEP:
      extended = 1;
      sc = 0x5f;
      break;
    case KEY_WAKEUP:
      extended = 1;
      sc = 0x63;
      break;
    case KEY_FILE:
    case KEY_SENDFILE:
    case KEY_DELETEFILE:
    case KEY_XFER:
    case KEY_PROG1:
    case KEY_PROG2:
    case KEY_WWW:
    case KEY_MSDOS:
    case KEY_COFFEE:
    case KEY_DIRECTION:
    case KEY_CYCLEWINDOWS:
    case KEY_MAIL:
    case KEY_BOOKMARKS:
    case KEY_COMPUTER:
    case KEY_BACK:
    case KEY_FORWARD:
    case KEY_CLOSECD:
    case KEY_EJECTCD:
    case KEY_EJECTCLOSECD:
    case KEY_NEXTSONG:
    case KEY_PLAYPAUSE:
    case KEY_PREVIOUSSONG:
    case KEY_STOPCD:
    case KEY_RECORD:
    case KEY_REWIND:
    case KEY_PHONE:
    case KEY_ISO:
    case KEY_CONFIG:
    case KEY_HOMEPAGE:
    case KEY_REFRESH:
    case KEY_EXIT:
    case KEY_MOVE:
    case KEY_EDIT:
    case KEY_SCROLLUP:
    case KEY_SCROLLDOWN:
    case KEY_KPLEFTPAREN:
    case KEY_KPRIGHTPAREN:
    case KEY_NEW:
    case KEY_REDO:
    case KEY_F13:
    case KEY_F14:
    case KEY_F15:
    case KEY_F16:
    case KEY_F17:
    case KEY_F18:
    case KEY_F19:
    case KEY_F20:
    case KEY_F21:
    case KEY_F22:
    case KEY_F23:
    case KEY_F24:
    case KEY_PLAYCD:
    case KEY_PAUSECD:
    case KEY_PROG3:
    case KEY_PROG4:
    case KEY_DASHBOARD:
    case KEY_SUSPEND:
    case KEY_CLOSE:
    case KEY_PLAY:
    case KEY_FASTFORWARD:
    case KEY_BASSBOOST:
    case KEY_PRINT:
    case KEY_HP:
    case KEY_CAMERA:
    case KEY_SOUND:
    case KEY_QUESTION:
    case KEY_EMAIL:
    case KEY_CHAT:
    case KEY_SEARCH:
    case KEY_CONNECT:
    case KEY_FINANCE:
    case KEY_SPORT:
    case KEY_SHOP:
    case KEY_ALTERASE:
    case KEY_CANCEL:
    case KEY_BRIGHTNESSDOWN:
    case KEY_BRIGHTNESSUP:
    case KEY_MEDIA:
    case KEY_SWITCHVIDEOMODE:
    case KEY_KBDILLUMTOGGLE:
    case KEY_KBDILLUMDOWN:
    case KEY_KBDILLUMUP:
    case KEY_SEND:
    case KEY_REPLY:
    case KEY_FORWARDMAIL:
    case KEY_SAVE:
    case KEY_DOCUMENTS:
    case KEY_BATTERY:
    case KEY_BLUETOOTH:
    case KEY_WLAN:
    case KEY_UWB:
    case KEY_UNKNOWN:
    case KEY_VIDEO_NEXT:
    case KEY_VIDEO_PREV:
    case KEY_BRIGHTNESS_CYCLE:
    case KEY_BRIGHTNESS_ZERO:
    case KEY_DISPLAY_OFF:
    case KEY_WIMAX:
    case KEY_RFKILL:
      /* none ? */
      return;
    }

  if (ev.value == 0)
    sc |= 0x80;

  if (extended == 1)
    putc(0xE0, stdout);

  putc(sc, stdout);
  fflush(stdout);
}

int
event_read_loop()
{
  struct input_event ev;

  if (getuid() != 0)
    {
      fprintf(stderr,
          "input-reader needs to be run as root when reading from device.\n");
      exit (1);
    }

  if ((device_fd = open(device_node_path, O_RDONLY)) == -1)
    {
      fprintf(stderr, "Cannot open %s.", device_node_path);
      exit(1);
    }

  while (sizeof(ev) == read(device_fd, &ev, sizeof(ev)))
    {
#ifdef DEBUG
      fprintf(stderr, "input_event {\n"
         "\ttime = %d\n"
         "\ttype = %s (%d)\n"
         "\tcode = %d\n"
         "\tvalue = %d\n"
         "}\n", (int) (ev.time.tv_usec + ev.time.tv_sec * 1E6)
         , event_type_name(ev), ev.type
         , ev.code
         , ev.value);
#endif
      if (ev.type == EV_KEY)
      	emit_at_scancodes(ev);
    }

  /* this loop can only be ended successfully through a signal. */
  exit(1);
}

/* Handle interrupt. */
void
handle_sigint(int sig)
{
  if (device_fd != -1)
    close(device_fd);
  exit(0);
}

/* Options */
static struct argp_option options[] = {
  {"device",     'd', "DIR",          0, 
   "keyboard device node used as scancodes source" },
  {0}
};

static error_t
parse_opt (int key, char *arg, struct argp_state *state)
{
  switch (key)
    {
    case 'd':
      read_from_stdin = 0;
      device_node_path = arg;
      break;

    case ARGP_KEY_END:
      break;
      
    default:
      return ARGP_ERR_UNKNOWN;
    }
  return 0;
}

static struct argp argp = {options, parse_opt, 0, 0};

int
main (int argc, char** argv)
{
  argp_parse(&argp, argc, argv, 0, 0, 0);

  signal(SIGINT, handle_sigint);
  signal(SIGTERM, handle_sigint);
  
  if (read_from_stdin)
    stdio_read_loop();
  else
    event_read_loop();

  /* *_loop never return */
  return 1;
}
