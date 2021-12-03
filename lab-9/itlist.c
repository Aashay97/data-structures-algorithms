#include "itlist.h"

bool hasMoreElements(Iterator it)
{
	return (it->curr->next!=NULL);
}

Element getNextElement(Iterator it)
{
	if(hasMoreElements(it))
	{
		it->curr=it->curr->next;
		return it->curr;
	}
	return NULL;
}
