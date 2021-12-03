graph: graph.o driver.o que.o bfs.o
	gcc graph.o driver.o que.o bfs.o -o graph

graph.o: graph.h graph.c
	gcc -c graph.c -o graph.o

driver.o: graph.h driver.c
	gcc -c driver.c -o driver.o

que.o: graph.h que.h que.c
	gcc -c que.c -o que.o

bfs.o: graph.h que.h bfs.c
	gcc -c bfs.c -o bfs.o
