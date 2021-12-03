graph: driver.o read.o topo.o
	gcc driver.o read.o topo.o -o graph

driver.o: graph.h driver.c
	gcc -c driver.c -o driver.o

read.o: graph.h read.c
	gcc -c read.c -o read.o

topo.o: graph.h topo.c
	gcc -c topo.c -o topo.o
