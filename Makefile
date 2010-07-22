CC = gcc
CFLAGS = -O -g -Wall -D_GNU_SOURCE -D_FILE_OFFSET_BITS=64
OBJS =	kstoucs.o symname.o compose.o xkb.o parser.tab.o lex.o \
	xkbdata.o xkbdefaults.o xkbtimer.o timer.o kbd-repeat.o \
	kdioctlServer.o
LIBS = -lthreads -lshouldbeinlibc -lfshelp -liohelp
LEX=flex
YACC=bison

# Where to put library and xkb files
LIB	= $(DESTDIR)/lib/hurd/console/
XKB	= $(DESTDIR)/share/X11/xkb

all: xkb.so.0.3 input_driver_test

install: all
	install -d $(LIB) $(XKB) $(XKB)/keymap $(XKB)/types $(XKB)/symbols
	install -m644 xkb.so.0.3 $(LIB)
	install -m644 xkb/keymap/hurd $(XKB)/keymap/
	install -m644 xkb/symbols/hurd $(XKB)/symbols/
	install -m644 xkb/types/hurd $(XKB)/types/

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

xkb.so.0.3: $(OBJS)
	$(CC) -O -shared -Wl,-soname=xkb.so.0.3 -std=gnu99 -Wall -g '-Wl,-('   '-Wl,-)' -o xkb.so.0.3 $(OBJS) -lc

clean:
	-rm -f $(OBJS) xkb.so.*

lex.c:	lex.l parser.tab.h
	${LEX} -i -olex.c lex.l

parser.tab.c parser.tab.h:	parser.y
	$(YACC) -v -d $<

input_driver_test:	input_driver_test.c
	$(CC) -rdynamic $(CFLAGS) $(LIBS) -ldl input_driver_test.c -o input_driver_test

parser_test: test/parser_test.c compose.o kstoucs.o xkbdata.c test/ihash.c lex.o parser.tab.o symname.o xkbdefaults.o
	$(CC) $(CFLAGS) -std=gnu99 -I. -Itest test/parser_test.c test/ihash.c xkbdata.c compose.o kstoucs.o symname.o xkbdefaults.o parser.tab.o lex.o -o parser_test

