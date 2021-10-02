CC = g++
RM = rm -f

CFLAGS = -c -Wall -std=c++11
LFLAGS = 


all: employee_main

employee_main: employee_main.o employee.o printmefirst.o
	$(CC) employee_main.o employee.o printmefirst.o -o employee_main $(LFLAGS)

employee_main.o: employee_main.cpp
	$(CC) $(CFLAGS) employee_main.cpp

employee.o: employee.cpp employee.h
	$(CC) $(CFLAGS) employee.cpp

printmefirst.o: printmefirst.cpp printmefirst.h
	$(CC) $(CFLAGS) printmefirst.cpp


clean:
	$(RM) *.o employee_main
	
run:
	./employee_main
