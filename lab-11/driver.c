#include "graph.h"

int main()
{
	EdgeList e=readedges("graph0.txt");
	printedges(e);
	printver(e);
	topoSort(e);
	return 0;
}
