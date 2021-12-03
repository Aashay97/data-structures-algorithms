#include "itarray.h"

bool hasMoreElements(Iterator it)
{
	return (it->curr < it->size-1);
}

Element getNextElement(Iterator it)
{
	if(hasMoreElements(it))
	{
		it->curr++;
		return it->earr + it->curr;
	}
	return NULL;
}
