#include <stdio.h>
// #include <stdlib.h>  //. _countof()
// #include <conio.h>  //. _getch(), _getche()에 대한 선언 포함. 현재는 stdio.h에도 포함되어 있음.

void main()
{
	//. p.190-6
	//int nData = 0;
	//scanf_s("%d", &nData);  //. �Է°��� �ʴ������ ����
	//	//. h:m:s ǥ��
	//printf("%d\n", nData);

	//char sData[100];
	////scanf_s("%99s", sData, (unsigned)_countof(sData));
	//scanf_s("%99s", sData, _countof(sData));
	//printf("%s\n", sData);

	/*printf("%d\n", &nData);
	printf("%d:%d:%d\n",
		nData / 3600,
		nData / 60 % 60,
		nData % 60);*/


	//. p.190-5
	//int nData = 0;
	//int nResult = 0;

	//printf("Input number: ");
	//scanf_s("%d", &nData);

	//nResult = nData * (-1);
	//printf("Sign conversion value is %d\n", nResult);


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

	//printf("%d\n", ++nNewData);  //. nNewData == 21, ouput == 21, ���� ������->����� ���԰� ���
	//printf("%d\n\n", nNewData++);  //. nNewData  == 22, ouput == 21 , ���� ������->��� �� ��갪 ����

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

	//nData_rshift = nData >> 3;  //. ���� ������ ����Ʈ�� ���� ��ȣ��Ʈ ������ ���� �е��� 1�� ä��.
	//nData_lshift = nData << 3;  //. ���� ���� ����Ʈ�� ���� ��ȣ�� ��� �����Ƿ� �е��� 0���� ä��.
	//nData_lshift_28 = nData << 28;  // 01010000 00000000 00000000 00000000. ���� ����Ʈ�� 0���� ä��
	//printf("%X\n", nData_rshift);
	//printf("%X\n", nData_lshift);
	//printf("%X\n", nData_lshift_28);


	//. +a
	int nData = 0x80000001;  //. 10000000 00000000 00000000 00000001
	int nData_lshift;
	int nData_rshift;

	printf("%d\n", nData);

	nData_rshift = nData >> 1;
	printf("%d\n", nData_rshift);
	nData_rshift >>= 1;
	printf("%d\n", nData_rshift);

	nData_lshift = nData << 1;
	printf("%d\n", nData_lshift);
	nData_lshift <<= 1;
	printf("%d\n", nData_lshift);


	//. p.176
	//int nResult = 0x11223344;

	//printf("%X\n", nResult & 0xFFFF0000);  //. Mask ����. ���� �κ��� �޸� ���� �߶�. & ���� ������ ���� �̿�.
	//printf("%X\n", nResult >> 16);
	//printf("%X\n", nResult << 8);
	//printf("%X\n", nResult | 0x2211FFFF);
	//printf("%X\n", nResult ^ 0x2211FFFF);
	//printf("%X\n", ~nResult);


	//. p.171
	//char szName_1[16] = "a";
	//char szName_2[16];
	//const int nData = 10;

	//printf("%c\n", szName_1);  //. %c�� ���� �ϳ��� ����ϴ��� szName_1�� �迭�̹Ƿ� �ȸ���. �������� ���� ���.
	//printf("%c\n", *szName_1);  //. �迭�̹Ƿ� szName_1�� �迭�� ù��° �ּҸ� ����. �� �ּ��� ���� ��Ÿ���� *(������)�� �����ϸ� ����� ��� ����.
	//printf("%s\n\n", szName_1);

	//strcpy(szName_2, szName_1);

	//printf("%c\n", szName_2);
	//printf("%c\n", *szName_2);  //. �迭�̹Ƿ� szName_1�� �迭�� ù��° �ּҸ� ����. �� �ּ��� ���� ��Ÿ���� *(������)�� �����ϸ� ����� ��� ����.
	//printf("%s\n\n", szName_2);

	//nData = 11;  //. nData�� const�� ���ȭ�� �����Ǿ����Ƿ� �б⸸ ����. ���� �Ұ���.
	

	//. p.171
	//char szName[16] = { 0 };
	//const int nData = 10;

	//szName = 'A';  //. szName�� �迭�� ����Ǿ����Ƿ� �迭�� ù��° �ּҸ� ������ ����Ǿ�� �ϴµ� ���ڰ� �����Ƿ� ������ ������ �Ͼ��.
	//szName[0] = 'A';
	////nData = 20;  //. const�� ���ȭ ����Ǿ����Ƿ� �б⸸ ����. ������ �� ���� ����Ŵ.


	//. p.166
	//char ch = 'A';
	//int nData = 15;
	//float fData1 = 1.5f, fData2 = 3.4f;

	//printf("%d\n", nData * 100 / 100);
	//printf("%f\n", nData * 100 / 100.0f);
	//printf("%f\n", (float)(nData * 100 / 100));
	//printf("%f\n", nData * 100 / 100);  //. ���� ����ó�� ������ ����. ��� ��� int���� %f�� ���� ����.
	//printf("%d\n", (float)nData * 100 / 100);  //. �ƿ�ǲ�� 15�� �ƴ϶� 0��. ��� ��� float���� %d�� ���� ����.


	//. p.160
	//int nA = 20;

	////printf("%d\n", nA / 0);  //. ����� ������ ������ 0�̶� ���� �۵� ����.
	////printf("%d\n", nA % 0);  //. ����� ������ ������ 0�̶� ���� �۵� ����.
	//printf("%d\n", nA / 6);
}   