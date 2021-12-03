hash: hash.o driver.o
	gcc -g hash.o driver.o -o hash
hash.o:hash.c hash.h
	gcc -c -g hash.c -o hash.o
driver.o : driver.c hash.h
	gcc -c -g driver.c -o driver.o
que.o: que.c que.h
	gcc -c -g que.c -o que.o
hashtable.o: hashtable.c hashtable.o
	gcc -c -g hashtable.c -o hashtable.o
