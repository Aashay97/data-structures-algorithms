#include "merge.h"
#include <stdio.h>

int main()
{
        Element ls[1024];
        FILE* fp=fopen("1024.txt","r");

        int i=0;
        while(!feof(fp) && i<1024)
        {
                fscanf(fp,"%[a-z],%f\n",ls[i].Name,&ls[i].$
                i++;
        }

        //printList(ls,1024);

        rMergeSort(ls,0,1023);

        //printList(ls,1024);

        return 0;
}


