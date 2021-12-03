quick: stack.o employee.o driver.o bisection.o
	gcc stack.o employee.o driver.o bisection.o -o quick

stack.o: stack.c stack.h
	gcc -c stack.c -o stack.o

employee.o: employee.c employee.h stack.h
	gcc -c employee.c -o employee.o

driver.o: driver.c employee.h
	gcc -c driver.c -o driver.o

bisection.o: bisection.c employee.h
	gcc -c bisection.c -o bisection.o
	
