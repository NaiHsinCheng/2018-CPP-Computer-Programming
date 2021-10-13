
CFLAGS =-s 

all:	1 3


1: 1.o f.o g.o
	g++ $(CFLAGS) -o 1 1.o f.o g.o
3: 3.o
	g++ $(CFLAGS) -o 3 3.o

1.o:
	g++ $(CFLAGS) -c 1.cpp
3.o:
	g++ $(CFLAGS) -c 3.cpp
f.o:
	g++ $(CFLAGS) -c f.cpp
g.o:
	g++ $(CFLAGS) -c g.cpp

clean:
	rm -f *.o 1 3
