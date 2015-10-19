CC = g++
#CCFLAGS = -O -Wall -Werror -ansi
FILE = cw_cis230_midterm_pc2
CLASS1 = cw_employee

$(FILE) : $(FILE).o $(CLASS1).o
	$(CC) -o $(FILE).exe $(FILE).o $(CLASS1).o

$(FILE).o : $(FILE).cpp $(CLASS1).h
	$(CC) $(CCFLAGS) -c $(FILE).cpp

$(CLASS1).o : $(CLASS1).cpp $(CLASS1).h
	$(CC) $(CCFLAGS) -c $(CLASS1).cpp

clean:
	rm -f *.o $(FILE).exe
