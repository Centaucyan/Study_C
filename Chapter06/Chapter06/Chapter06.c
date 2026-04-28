#include <stdio.h>

void main(void)
{
	//. p.219-3
	int n_01 = 0, n_02 = 0, n_03 = 0, n_max = 0;
	printf("Input int number 3times: ");
	scanf_s("%d %d %d", &n_01, &n_02, &n_03);

	int n_temp = 0;

	n_temp = (n_01 > n_02) ? n_01 : n_02;
	n_max = (n_temp > n_03) ? n_temp : n_03;

	printf("Max value is '%d'", n_max);


	//. p.219-1
	/*int nInput_1 = 0, nInput_2 = 0;
	printf("Input two numbers: ");
	scanf_s("%d %d", &nInput_1, &nInput_2);
	printf("nInput_1: %d __ nInput_2: %d\n\n", nInput_1, nInput_2);

	printf("Result: %d\n", (nInput_1 > 10) && (nInput_2 > 10) ? 1 : 0);*/


	//. p.214
	//int nData = 10;
	//int* pnData = &nData;

	//printf("%d %d\n", nData, *pnData);  //. Output: nData == 10, *pnData == 10
	//printf("%p, %p\n", &nData, pnData);

	//*pnData = 20;
	//printf("%d %d\n", nData, *pnData);
	//printf("%p, %p\n", &nData, pnData);


	//. +@
	/*int nData = 10;
	int* nResult;

	nResult = &nData;

	printf("%d, %p\n", nData, &nData);
	printf("%d, %p, %p\n", *nResult, nResult, &nResult);*/


	//. p.212
	/*int nData = 10;
	int nResult = 0;

	nResult += nData;
	printf("%d, %p\n", nData, &nData);
	printf("%d, %p\n", nResult, &nResult);*/


	//. p.209
	//int nA = 0, nB = 0;
	//nA = (nB + 10, nA + 6, nB + 4, nA = 2);  //. 콤마 연산자일 때는 각 원소가 산술 연산은 하되 결과 값은 버려짐. 각 원소 대입 연산은 결과값 저장됨. 마지막 원소가 바깥에서 nA로 대입됨. .
	//printf("nA = %d _ nB = %d", nA, nB);


	//. p.204
	//int nA = 10, nB = 20;

	//nA > nB ? nA++ : nB++;  //. nA == 10, nB = 21
	//printf("%d %d\n", nA, nB);
	//printf("%d\n", nA < nB ? nA : nB);  //. Output: nA(10)
	//printf("%s\n", nA + 20 < nB ? "Big" : "Small");  //. Output: "Small"

	
	//. +a
	//char* pNewData = "";
	//strlen(pNewData);
	//strlen(NULL);  //. strlen()함수에 NULL 값을 전달하면 런타임 오류 발생
	//printf("%s", pNewData);

	//pNewData = "Gogogo~";
	//printf("%s\n\n", pNewData);


	//. p.204
	//char* pszData = "Hello, World!";

	//if (pszData != NULL && strlen(pszData) > 3)  //. 논리 연산의 생략(short circuit) 이용해서 런타임 오류 방지
	//{
	//	printf("%s\n", pszData);
	//	printf("%d\n", strlen(pszData));
	//}


	//. p.202
	/*int k, x = -1, y = -1, z = 1;
	k = ++x || ++y && ++z;
	printf("%d %d %d %d\n", k, x, y, z);

	x = -1, y = -1, z = 1;
	k = x++ || ++y && ++z;
	printf("%d %d %d %d\n", k, x, y, z);*/
}