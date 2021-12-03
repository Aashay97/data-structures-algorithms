#include <stdio.h>
#include <stdlib.h>
#include "credit.h"

Record* newRecords()
{
	FILE* fp=fopen("10","r");
	if(fp==NULL) return NULL;

	unsigned long long int cardNum;
	char bankcode[20];
	char expiryDate[10];
	char firstName[20];
	char lastName[20];
	int i=0;
	Record* credcards= (Record*)malloc(sizeof(Record)*10);

	while(!feof(fp) && i<10)
	{
		fscanf(fp,"%llu %*c %[^,]s %*c %[^,]s %*c %[^,]s %*c %[^,]s",&cardNum,bankcode,expiryDate,firstName,lastName);
		printf("%llu bl %s bl %s bl %s bl %s %d \n",cardNum,bankcode,expiryDate,firstName,lastName,i);
		i++;
	}
	return NULL;
}

int main()
{
	newRecords();
	return 0;
}
