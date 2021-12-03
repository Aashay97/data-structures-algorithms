#ifndef CREDIT_H
#define CREDIT_H

typedef struct
{
	unsigned long long int cardNum;
	char* bankCode;
	char expiryDate[8];
	char* firstName;
	char* lastName;
}Record;

Record* newRecords();

#endif
