CC = gcc
CFLAGS = -O -g -Wall -D_GNU_SOURCE -D_FILE_OFFSET_BITS=64
OBJS =	kstoucs.o symname.o compose.o xkb.o parser.tab.o lex.o \
	xkbdata.o xkbdefaults.o xkbtimer.o timer.o kbd-repeat.o \
	kdioctlServer.o
LIBS = -lthreads -lshouldbeinlibc -lfshelp -liohelp -lnetfs
LEX=flex
YACC=bison

all: xkb.so.0.3 input_driver_test

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

xkb.so.0.3: $(OBJS)
	$(CC) -O -shared -Wl,-soname=xkb.so.0.3 -std=gnu99 -Wall -g '-Wl,-('   '-Wl,-)' -o xkb.so.0.3 $(OBJS) -lc

clean:
	-rm $(OBJS) xkb

lex.c:	lex.l parser.tab.h
	${LEX} -i -olex.c lex.l

parser.tab.c parser.tab.h:	parser.y
	$(YACC) -v -d $<

input_driver_test:	input_driver_test.c
	$(CC) -rdynamic $(CFLAGS) $(LIBS) -ldl input_driver_test.c -o input_driver_test
