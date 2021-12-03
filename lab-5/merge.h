#ifndef MERGE_H
#define MERGE_H

typedef struct
{
	char Name[11];
	float cgpa;
}Element;


void merge(Element ls1[],int size1, Element ls2[],int size2,Element ls[]);
void printList(Element ls[],int size);
void rMergeSort(Element ls[],int lo,int hi);
void iMergeSort(Element ls[],int size);
int mergeParts();
void mergeFiles(char file1[],char file2[],char fout[]);
void mergeSort();

#endif
