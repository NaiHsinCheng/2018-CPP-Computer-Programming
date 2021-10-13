
CFLAGS =-s 

all:	1 3 4 8

1: 1.o
	g++ $(CFLAGS) -o 1 1.o
3: 3.o
	g++ $(CFLAGS) -o 3 3.o
4: 4.o
	g++ $(CFLAGS) -o 4 4.o
8: 8.o
	g++ $(CFLAGS) -o 8 8.o

1.o:
	g++ $(CFLAGS) -c 1.cpp
3.o:
	g++ $(CFLAGS) -c 3.cpp
4.o:
	g++ $(CFLAGS) -c 4.cpp
8.o:
	g++ $(CFLAGS) -c 8.cpp


clean:
	rm -f *.o 1 3 4 8
