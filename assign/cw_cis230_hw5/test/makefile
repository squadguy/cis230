CC = g++
#CCFLAGS = -c++std=11 -O -Wall -Werror -ansi
FILE = cw_cis230_hw5
CLASS1 = HugeInteger 

$(FILE) : $(FILE).o $(CLASS1).o
	$(CC) -o $(FILE).exe $(FILE).o $(CLASS1).o
	
$(FILE).o : $(FILE).cpp $(CLASS1).h
	$(CC) -std=c++11 $(CCFLAGS) -c $(FILE).cpp

$(CLASS1).o : $(CLASS1).cpp $(CLASS1).h
	$(CC) -std=c++11 $(CCFLAGS) -c $(CLASS1).cpp

clean:
	rm -f *.o $(FILE).exe
