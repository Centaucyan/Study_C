#include <stdio.h>

void main()
{
	/*
	int nData = 10;
	int *pnData = &nData;

	*pnData = 255;
	*pnData = 256;
	*pnData = 9999999999;
	*/ 

	
	double dblData = 123.45;
	float flData = -123.45;
	long lData = 1234.56;
	int nData = 12345;

	printf("%d\n", sizeof(dblData));
	printf("%d\n", sizeof(flData));
	printf("%d\n", sizeof(lData));
	printf("%d\n\n", sizeof(nData));

	printf("%d\n", sizeof(16.61));
	printf("%d\n", sizeof(16.61f));

	// x = 0;
	
}