#include <stdio.h>

void main(void)
{
	//. p.219-1
	int nInput_1 = 0, nInput_2 = 0;
	printf("Input two numbers: ");
	scanf_s("%d %d", &nInput_1, &nInput_2);
	printf("nInput_1: %d __ nInput_2: %d\n\n", nInput_1, nInput_2);

	printf("Result: %d\n", (nInput_1 > 10) && (nInput_2 > 10) ? 1 : 0);


	//. p.214
	//int nData = 10;
	//int* pnData = &nData;

	//printf("%d %d\n", nData, *pnData);  //. Output: nData == 10, *pnData == 10
	//printf("%p, %p\n", &nData, pnData);

	//*pnData = 20;
	//printf("%d %d\n", nData, *pnData);


	//. p.204
	//int nA = 10, nB = 20;

	//nA > nB ? nA++ : nB++;  //. nA == 10, nB = 21
	//printf("%d %d\n", nA, nB);
	//printf("%d\n", nA < nB ? nA : nB);  //. Output: nA(10)
	//printf("%s\n", nA + 20 < nB ? "Big" : "Small");  //. Output: "Small"

	
	//. p.204
	/*char* pszData = "Hello, World!";

	if (pszData != NULL && strlen(pszData) > 3)
	{
		printf("%s\n", pszData);
		printf("%d\n", strlen(pszData));
	}*/


	//. p.202
	/*int k, x = -1, y = -1, z = 1;
	k = ++x || ++y && ++z;
	printf("%d %d %d %d\n", k, x, y, z);

	x = -1, y = -1, z = 1;
	k = x++ || ++y && ++z;
	printf("%d %d %d %d\n", k, x, y, z);*/


	//. p.171
	//char szName[16] = { 0 };
	//const int nData = 10;

	//szName = 'A';  //. szName은 배열로 선언되었으므로 배열의 첫번째 주소를 값으로 저장되어야 하는데 문자가 왔으므로 컴파일 오류가 일어난다.
	//szName[0] = 'A';
	////nData = 20;  //. const로 상수화 선언되었으므로 읽기만 가능. 컴파일 시 오류 일으킴.
}