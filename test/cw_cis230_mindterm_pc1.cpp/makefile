CC = g++
#CCFLAGS = -O -Wall -Werror -ansi
FILE = cw_cis230_midterm_pc1
CLASS1 = Employee

$(FILE) : $(FILE).o $(CLASS1).o
	$(CC) -o $(FILE).exe $(FILE).o $(CLASS1).o

$(FILE).o : $(FILE).cpp $(CLASS1).h
	$(CC) $(CCFLAGS) -c $(FILE).cpp

$(CLASS1).o : $(CLASS1).cpp $(CLASS1).h
	$(CC) $(CCFLAGS) -c $(CLASS1).cpp

clean:
	rm -f *.o $(FILE).exe
