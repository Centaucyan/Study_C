#include <stdio.h>

void main()
{
	//. p.102
	/*int nData = 10;
	int *pnData = &nData;

	*pnData = 255;
	*pnData = 256;
	*pnData = 9999999999;*/
	 

	//. p.84
	char* pszData = "abc";
	char ch = 'A';

	printf("%s\n", pszData);
	printf("%c\n", ch);
	printf("%s\n", ch);  //. %s는 문자열을 받음. 문자 하나는 %c로 받음.

	//. p.83
	/*double dblData = 123.45;
	float flData = -123.45;
	long lData = 1234.56;
	int nData = 12345;

	printf("%d\n", sizeof(dblData));
	printf("%d\n", sizeof(flData));
	printf("%d\n", sizeof(lData));
	printf("%d\n\n", sizeof(nData));

	printf("%d\n", sizeof(16.61));
	printf("%d\n", sizeof(16.61f));*/

	// x = 0;
	
}