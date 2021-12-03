listtree: tree.o itlist.o driver.o
	gcc tree.o itlist.o driver.o -o listtree
tree.o: tree.h tree.c
	gcc -c tree.c -o tree.o
itarray.o: itarray.c itarray.h
	gcc -c itarray.c -o itarray.o
itlist.o: itlist.c itlist.h
	gcc -c itlist.c -o itlist.o
driver.o: tree.h driver.c
	gcc -c driver.c -o driver.o
