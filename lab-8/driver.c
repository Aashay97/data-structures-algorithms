#include "tree.h"

int main()
{
	srand(time(NULL));
	Tree t=createTree(),temp;
	printInOrder(t);
	int i;
	printf("\n");

	for(i=0;i<30;i++)
	{
		temp=createTree();
		addNode(t,temp);
	}

	printInOrder(t);
        printf("\n");

	Tree find=findNode(t,155);
	printInOrder(find);
	//find=findNode(t,15);
        //printInOrder(find);

	t=deleteNode(t,155);

        printf("\n");
        printInOrder(t);

	return 0;
}
