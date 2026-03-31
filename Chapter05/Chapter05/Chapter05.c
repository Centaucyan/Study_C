#include <stdio.h>

void main()
{
	//. p.190-6
	int nData = 0;
	scanf_s("%d", &nData);  //. 입력값은 초단위라고 가정
		//. h:m:s 표현
	printf("%d:%d:%d\n",
		nData / 3600,
		nData / 60 % 60,
		nData % 60);


	//. p.190-3
	/*int nNum_1 = 0;
	int nResult_1 = 0, nResult_2 = 0;

	printf("Input number: ");
	scanf_s("%d", &nNum_1);
	printf("\n");

	nResult_1 = nNum_1 >> 3;
	printf("Result 3 r-shift: %d\n", nResult_1);
	nResult_2 = nNum_1 & 0xfffffff8;
	printf("Result 3bit from LSB change to 0: %d\n", nResult_2);*/


	//. p.190-1
	/*int nNum_1 = 0, nNum_2 = 0;
	printf("Input number 2times: ");
	scanf_s("%d %d", &nNum_1, &nNum_2);

	printf("\n");
	printf("num1 + num2 = %d\n", nNum_1 + nNum_2);
	printf("num1 - num2 = %d\n", nNum_1 - nNum_2);
	printf("num1 * num2 = %d\n", nNum_1 * nNum_2);
	printf("num1 / num2 = %d\n", nNum_1 / nNum_2);*/


	//. p.187
	//int nData = 10, nNewData = 20;
	//int nResult = 0;

	//nData--;
	//printf("%d\n", nData);  //. nData == 9
	//--nData;
	//printf("%d\n\n", nData); //. nData == 8

	//printf("%d\n", ++nNewData);  //. nNewData == 21, ouput == 21, 선위 연산자->계산후 대입값 출력
	//printf("%d\n\n", nNewData++);  //. nNewData  == 22, ouput == 21 , 후위 연산자->출력 후 계산값 대입

	//nData = 10, nNewData = 20;

	//printf("%d\n", ++nData);  //. nData == 11, output == 11
	//printf("%d\n\n", nData++);  //. nData == 12, output == 11

	//nResult = ++nData + nNewData++;  // nData == 13, nNewData == 21, nResult == 13 + 10 = 33
	//printf("%d\n", nResult);


	//. p.180
	//int nData = -123;  //. 11111111 11111111 11111111 10000101
	//printf("%X\n", nData);

	//int nData_rshift;
	//int nData_lshift;
	//int nData_lshift_28;

	//nData_rshift = nData >> 3;  //. 음수 오른쪽 쉬프트일 때는 부호비트 유지를 위해 패딩을 1로 채움.
	//nData_lshift = nData << 3;  //. 음수 왼쪽 쉬프트일 때는 부호와 상관 없으므로 패딩을 0으로 채움.
	//nData_lshift_28 = nData << 28;  // 01010000 00000000 00000000 00000000. 왼쪽 쉬프트는 0으로 채움
	//printf("%X\n", nData_rshift);
	//printf("%X\n", nData_lshift);
	//printf("%X\n", nData_lshift_28);


	//. p.176
	//int nResult = 0x11223344;

	//printf("%X\n", nResult & 0xFFFF0000);  //. Mask 연산. 일정 부분의 메모리 값을 잘라냄. & 논리 연산의 생략 이용.
	//printf("%X\n", nResult >> 16);
	//printf("%X\n", nResult << 8);
	//printf("%X\n", nResult | 0x2211FFFF);
	//printf("%X\n", nResult ^ 0x2211FFFF);
	//printf("%X\n", ~nResult);


	//. p.171
	//char szName_1[16] = "a";
	//char szName_2[16];
	//const int nData = 10;

	//printf("%c\n", szName_1);  //. %c는 문자 하나를 기대하는지 szName_1은 배열이므로 안맞음. 랜덤으로 문자 출력.
	//printf("%c\n", *szName_1);  //. 배열이므로 szName_1은 배열의 첫번째 주소를 가짐. 이 주소의 값을 나타내는 *(포인터)로 지정하면 제대로 출력 가능.
	//printf("%s\n\n", szName_1);

	//strcpy(szName_2, szName_1);

	//printf("%c\n", szName_2);
	//printf("%c\n", *szName_2);  //. 배열이므로 szName_1은 배열의 첫번째 주소를 가짐. 이 주소의 값을 나타내는 *(포인터)로 지정하면 제대로 출력 가능.
	//printf("%s\n\n", szName_2);

	//nData = 11;  //. nData는 const로 상수화로 지정되었으므로 읽기만 가능. 쓰기 불가능.
	

	//. p.166
	//char ch = 'A';
	//int nData = 15;
	//float fData1 = 1.5f, fData2 = 3.4f;

	//printf("%d\n", nData * 100 / 100);
	//printf("%f\n", nData * 100 / 100.0f);
	//printf("%f\n", (float)(nData * 100 / 100));
	//printf("%f\n", nData * 100 / 100);  //. 무한 루프처럼 끝나지 않음. 계산 결과 int형을 %f로 받지 못함.
	//printf("%d\n", (float)nData * 100 / 100);  //. 아웃풋이 15가 아니라 0임. 계산 결과 float형을 %d로 받지 못함.


	//. p.160
	//int nA = 20;

	////printf("%d\n", nA / 0);  //. 빌드는 되지만 제수가 0이라서 정상 작동 안함.
	////printf("%d\n", nA % 0);  //. 빌드는 되지만 제수가 0이라서 정상 작동 안함.
	//printf("%d\n", nA / 6);
}   