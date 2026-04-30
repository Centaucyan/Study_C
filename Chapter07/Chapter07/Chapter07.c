#include <stdio.h>
// #include <stdlib.h>  //. _countof()
// #include <conio.h>  //. _getch(), _getche()에 대한 선언 포함. 현재는 stdio.h에도 포함되어 있음.

void main(void)
{
	//. p.247-2
	char c_data = 0;

RESTART:

	c_data = getche();

	if (c_data == 'y' || c_data == 'Y') {
		return;
	}
	else {
		goto RESTART;
	}


	//. p.247-1
	/*int n_data = 0, n_max = 0;
	printf("Input number 4times:\n");
	n_max = scanf_s("%d", &n_data);

	scanf_s("%d", &n_data);
	if (n_data > n_max) {
		n_max = n_data;
	}

	scanf_s("%d", &n_data);
	if (n_data > n_max) {
		n_max = n_data;
	}

	scanf_s("%d", &n_data);
	if (n_data > n_max) {
		n_max = n_data;
	}

	scanf_s("%d", &n_data);
	if (n_data > n_max) {
		n_max = n_data;
	}

	printf("n_max number is %d\n", n_max);*/
	

	//. p.245_goto
//	int n_data = 0;
//	printf("Input number: ");
//	scanf_s("%d", &n_data);
//	printf("\n");
//
//	if (n_data > 10) {
//		goto END;  //. �� �ڵ� ��� �Ʒ� END: �� ���� ��. goto���� ���� ��ġ�� ������ �ű�� ����. �����������α׷� Ư����� ������� ���� ��.
//	}
//	else {
//		printf("Number is under 10\n");
//	}
//
//END:
//	printf("END\n");
//	if (n_data >= 20) {
//		printf("n_data => %d\n", n_data);
//		goto END_2;
//	}
//	else {
//		printf("Number is between 10 and 20\n");
//		goto END_3;
//	}
//
//END_2:
//	printf("END_2\n");
//
//END_3:
//	printf("END_3\n");


	//. p.243
	//float fData = 1.1f;
	//switch (fData)  //. switch���� ���� ������� �����迭(int, char, short)�� �� �� �ִ�.
	//{
	//case 1.1f:
	//	break;
	//}


	//. p.240
	/*int nInput = 0;
	char chCredit = 'X';
	scanf_s("%d", &nInput);

	switch (nInput / 10)
	{
	case 10:
	case 9:
		chCredit = 'A';
		break;

	case 8:
		chCredit = 'B';
		break;
	case 7:
		chCredit = 'C';
		break;

	case 6:
		;
		chCredit = 'D';
		break;

	default:
		chCredit = 'F';
	}

	printf("Credit : %c\n", chCredit);*/


	//. p.226
	/*int nData = 0, nNewData = 20;

	if (nNewData = nData)
		puts("Success");*/
}