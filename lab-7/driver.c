#include "hash.h"

int main(){
/*	char* strings[]={"asdf","Asdf","asdf","sdfa"};
	printf("Number of collisions are : %d\n",collisionCount(strings,10,6,4));*/
	char* filename="aliceinwonderland.txt";
	char** book=parseStrings(filename);
	profiler(book,22698);
	return 0;
}
