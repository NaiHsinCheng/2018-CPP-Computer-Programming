CC = g++
TARGET1 = 6-1
TARGET3 = 6-7
TARGET4 = 6-10
TARGET5 = 6-12
FLAG = -std=c++11

all: $(TARGET1).cpp  $(TARGET3).cpp $(TARGET4).cpp $(TARGET5).cpp 
	$(CC) $(FLAG) -c $(TARGET1).cpp  $(TARGET3).cpp $(TARGET4).cpp $(TARGET5).cpp 
	$(CC) $(FLAG) -o $(TARGET1) $(TARGET1).o 
	$(CC) $(FLAG) -o $(TARGET3) $(TARGET3).o
	$(CC) $(FLAG) -o $(TARGET4) $(TARGET4).o
	$(CC) $(FLAG) -o $(TARGET5) $(TARGET5).o

	

clean:
	rm -f $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4) $(TARGET5) $(TARGET6) 
	rm -f $(TARGET1).o $(TARGET2).o $(TARGET3).o  $(TARGET4).o  $(TARGET5).o  $(TARGET6).o 
