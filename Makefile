CFLAGS = -O -g -Wall -D_GNU_SOURCE -D_FILE_OFFSET_BITS=64 -I. \
	 -std=gnu99 -fgnu89-inline -DXKB_DEBUG -g
OBJS =	kstoucs.o symname.o compose.o xkb.o parser.tab.o lex.o \
	xkbdata.o xkbdefaults.o xkbtimer.o timer.o kbd-repeat.o \
	kdioctlServer.o
LIBS = -lthreads -lshouldbeinlibc -lfshelp -liohelp -lnetfs
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

input_driver_test:	input_driver_test.c trans.o
	$(CC) -rdynamic $(CFLAGS) $(LIBS) -ldl input_driver_test.c trans.o -o input_driver_test

kbd-repeat.o: kdioctl_S.h


## TODO include Makeconf and config.make?
# How to run compilation tools.
CC = gcc
CPP = $(CC) -E -x c # We need this option when input file names are not *.c.
MIG = mig
MIGCOM = $(MIG) -cc cat - /dev/null

# How to build RPC stubs

# We always need this setting, because libc does not include the bogus names.
MIGCOMFLAGS := -subrprefix __

# User settable variables:
#	mig-sheader-prefix prepend to foo_S.h for name of foo.defs stub header
# 	MIGSFLAGS	   flags to CPP when building server stubs and headers
#	foo-MIGSFLAGS	   same, but only for interface `foo'
# 	MIGCOMSFLAGS	   flags to MiG when building server stubs and headers
#	foo-MIGCOMSFLAGS   same, but only for interface `foo'
# 	MIGUFLAGS	   flags to CPP when building user stubs and headers
#	foo-MIGUFLAGS	   same, but only for interface `foo'
# 	MIGCOMUFLAGS	   flags to MiG when building user stubs and headers
#	foo-MIGCOMUFLAGS   same, but only for interface `foo'
#	CPPFLAGS	   flags to CPP

# Implicit rules for building server and user stubs from mig .defs files.

# These chained rules could be (and used to be) single rules using pipes.
# But it's convenient to be able to explicitly make the intermediate
# files when you want to deal with a problem in the MiG stub generator.

%.sdefsi %.sdefs.d: %.defs
	$(CPP) $(CPPFLAGS) $(MIGSFLAGS) $($*-MIGSFLAGS) -DSERVERPREFIX=S_ \
	  -MD -MF $*.sdefs.d.new \
	  $< -o $*.sdefsi
	sed -e 's/[^:]*:/$*Server.c $(mig-sheader-prefix)$*_S.h:/' \
	  < $*.sdefs.d.new > $*.sdefs.d
	rm $*.sdefs.d.new

$(mig-sheader-prefix)%_S.h %Server.c: %.sdefsi
	$(MIGCOM) $(MIGCOMFLAGS) $(MIGCOMSFLAGS) $($*-MIGCOMSFLAGS) \
		    -sheader $(mig-sheader-prefix)$*_S.h -server $*Server.c \
		    -user /dev/null -header /dev/null < $<

%.udefsi %.udefs.d: %.defs
	$(CPP) $(CPPFLAGS) $(MIGUFLAGS) $($*-MIGUFLAGS) \
	  -MD -MF $*.udefs.d.new \
	  $< -o $*.udefsi
	sed -e 's/[^:]*:/$*User.c $*_U.h:/' \
	  < $*.udefs.d.new > $*.udefs.d
	rm $*.udefs.d.new

%_U.h %User.c: %.udefsi
	$(MIGCOM) $(MIGCOMFLAGS) $(MIGCOMUFLAGS) $($*-MIGCOMUFLAGS) < $< \
		  -user $*User.c -server /dev/null -header $*_U.h


parser_test: test/parser_test.c compose.o kstoucs.o xkbdata.c test/ihash.c lex.o parser.tab.o symname.o xkbdefaults.o test/xkbtimer.c
	$(CC) $(CFLAGS) -std=gnu99 -I. -Itest test/parser_test.c test/xkbtimer.c test/ihash.c xkbdata.c compose.o kstoucs.o symname.o xkbdefaults.o parser.tab.o lex.o -o parser_test

input-reader: test/input-reader.c
	$(CC) $(CFLAGS) -o $@ $<
