all: mymaths mymathd mains maind

mains: main.o
	gcc -Wall -o mains main.o libmyMath.a

mymaths: power.o basicMath.o libmyMath.a

libmyMath.a:
	ar -rcs libmyMath.a power.o basicMath.o

maind: main.o
	gcc -Wall -o maind main.o ./libmyMath.so

mymathd: power.o basicMath.o libmyMath.so

libmyMath.so:
	gcc -shared -o libmyMath.so basicMath.o power.o

main.o: main.c myMath.h
	gcc -Wall -c main.c

%.o: %.c
	gcc -Wall -c $^

.PHONY: clean all mymaths mymathd

clean:
	rm -f *.o *.so *.a mains maind