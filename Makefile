CFLAGS=-W -Wall -std=c11 -pedantic -g
LDFLAGS=
CC=gcc

all: withImpl1 withImpl2 withoutImpl

.PHONY: clean clean-all emacs-clean


withImpl1: main.o weakDef.o impl.o weakDef.h
	$(CC) $(LDFLAGS) -o withImpl1 main.o weakDef.o impl.o

withImpl2: main.o weakDef.o impl.o weakDef.h
	$(CC) $(LDFLAGS) -o withImpl2 main.o impl.o weakDef.o

withoutImpl: main.o weakDef.o
	$(CC) $(LDFLAGS) -o withoutImpl main.o weakDef.o


main.o: main.c weakDef.h
	$(CC) $(CFLAGS) -c -o main.o main.c

weakDef.o: weakDef.c weakDef.h
	$(CC) $(CFLAGS) -c -o weakDef.o weakDef.c

impl.o: impl.c
	$(CC) $(CFLAGS) -c -o impl.o impl.c


clean:
	rm -f *.o

emacs-clean:
	rm -f *~

clean-all: clean emacs-clean
	rm -f withImpl1
	rm -f withImpl2
	rm -f withoutImpl

