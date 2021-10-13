
CFLAGS =-s 

all:	2 3 5

2: 2.o
	g++ $(CFLAGS) -o 2 2.o
3: 3.o
	g++ $(CFLAGS) -o 3 3.o
5: 5.o
	g++ $(CFLAGS) -o 5 5.o

2.o:
	g++ $(CFLAGS) -c 2.cpp
3.o:
	g++ $(CFLAGS) -c 3.cpp
5.o:
	g++ $(CFLAGS) -c 5.cpp


clean:
	rm -f *.o 2 3 5
