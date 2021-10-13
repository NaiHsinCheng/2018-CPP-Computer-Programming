
CFLAGS =-s 

all:	4 6 8


4: 4.o
	g++ $(CFLAGS) -o 4 4.o
6: 6.o
	g++ $(CFLAGS) -o 6 6.o
8: 8.o
	g++ $(CFLAGS) -o 8 8.o


4.o:
	g++ $(CFLAGS) -c 4.cpp
6.o:
	g++ $(CFLAGS) -c 6.cpp
8.o:
	g++ $(CFLAGS) -c 8.cpp


clean:
	rm -f *.o  4 6 8
