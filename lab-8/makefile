tree: tree.o driver.o
	gcc tree.o driver.o -o tree

tree.o: tree.c tree.h
	gcc -c tree.c -o tree.o

driver.o: driver.c tree.h
	gcc -c driver.c -o driver.o
