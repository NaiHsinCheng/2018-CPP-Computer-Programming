
CFLAGS =-s 

all:	5 6

5: 5.o
	g++ $(CFLAGS) -o 5 5.o
6: 6.o
	g++ $(CFLAGS) -o 6 6.o


5.o:
	g++ $(CFLAGS) -c 5.cpp
6.o:
	g++ $(CFLAGS) -c 6.cpp


clean:
	rm -f *.o 5 6
