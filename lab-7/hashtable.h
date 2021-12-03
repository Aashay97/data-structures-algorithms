#ifndef HASHTABLE
#define HASHTABLE
#include "que.h"
#include <stdbool.h>
typedef struct
{
	Head* table;
	int tableSize;
	int elementCount;
	int insertionCost;
	int queryingCost;
}Table;

typedef Table* HashTable;

//bool findString(HashTable h,char* string);
HashTable createTable(int tableSize);
HashTable insertString(HashTable h,char** book,int index);
int insertAll(HashTable h,char** book,int num);
Element* lookUp(HashTable,char* string);

#endif
