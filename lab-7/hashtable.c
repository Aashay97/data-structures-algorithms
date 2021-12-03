#include "que.h"
#include "hashtable.h"

HashTable createTable(int tableSize);
{
	HashTable h=(HashTable)malloc(sizeof(Table));
	h->tableSize=tableSize;
	h->elementCount=0;
	h->insertionCost=0;
	h->queryingCost=0;

	h->table=(Head*)malloc(sizeof(Head)*tableSize);
	int i;
	for(i=0;i<tableSize;i++)
	{
		h->table[i]=newQ();
	}
}
HashTable insertString(HashTable h,char** book,int index);
int insertAll(HashTable h,char** book,int num);
Element* lookUp(HashTable,char* string);
