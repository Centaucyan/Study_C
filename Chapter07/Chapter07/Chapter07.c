#include <stdio.h>

void main(void)
{
	//. p.247-1
	int n_data = 0, n_max = 0;
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

	printf("n_max number is %d\n", n_max);
	






	//. p.245_goto
//	int n_data = 0;
//	printf("Input number: ");
//	scanf_s("%d", &n_data);
//	printf("\n");
//
//	if (n_data > 10) {
//		goto END;  //. 이 코드 없어도 아래 END: 문 시행 됨. goto문은 실행 위치를 무조건 옮기는 역할. 절차지향프로그램 특성대로 순서대로 실행 됨.
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
	//switch (fData)  //. switch문의 식의 결과값은 정수계열(int, char, short)만 올 수 있다.
	//{
	//case 1.1f:
	//	break;
	//}


	//. p.240
	//


	//. p.226
	/*int nData = 0, nNewData = 20;

	if (nNewData = nData)
		puts("Success");*/
}