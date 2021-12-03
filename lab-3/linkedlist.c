#include <stdlib.h>
#include "linkedlist.h"

List createList(int N)
{
	List ls=(Head*)myalloc(sizeof(Head));
	ls->size=N;
	Node* temp=ls->head;
	int i;
	for(i=0;i<N;i++)
	{
		temp=(Node*)myalloc(sizeof(Node));
		temp->N=rand();
		temp=temp->next;
	}
	temp=NULL;
	return ls;
}

List createCycle(List ls)
{
	
}

