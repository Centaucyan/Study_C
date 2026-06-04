#include <stdio.h>  //. prinf(), scanf(), sprintf(), _getch(), _getche(), gets(), puts() , stdlen()
#include <stdlib.h>  //. _countof(), malloc(), free()
#include <string.h>  //. memset()
// #include <conio.h>  //. _getch(), _getche()에 대한 선언 포함. 현재는 stdio.h에도 포함되어 있음.

void main(void)
{
	//. p.320
	char* psz_data = NULL;
	int n_input = 0;

	printf("Input length: ");
	scanf_s("%d", &n_input);
	psz_data = (char*)malloc(sizeof(char) * n_input);

	//fflush(stdin);    //. 입력 버퍼를 비울 때 역할 안됨. 대신 아래와 같이 while문을 이용해서 입력 버퍼 비움.
	while (getchar() != '\n'); 
	gets(psz_data);
	puts(psz_data);

	free(psz_data);


	//. p.311
	//int n_data = 10;

	//void* psz_string = "Test string!";
	//void* pfn_main = main;
	//void* pn_number = &n_data;

	//printf("%s\n", psz_string);
	//printf("%c\n", psz_string);  //. psz_string에는 문자 2가 입력된 주소가 값으로 들어가 있음.주소를 % c 아스키 문자로 해석하려니 예상 못하는 문자라 나옴.
	//printf("%c\n\n", *(char*)psz_string);  //. void형으로 선언된 포인터 변수를 형변환하여 출력하면 예상한 값 출력

	////printf("%d\n", *pn_number);  //. *pn_number는 void형이므로 여기의 주소의 값을 int로 해석하지 않음. 컴파일 오류 발생.
	//printf("%d\n\n", *(int*)pn_number);

	////printf("%c\n", *(psz_string + 1);  //. void형이므로 psz_string을 얼마만큼의 자료형 크기만큼 옵셋 해야 할지 모름. 컴파일 오류 발생.
	//printf("%c\n", *((char*)psz_string + 1));  //. %c는 값을 아스키 코드로 변환하여 출력.
	//printf("%s\n\n", (char*)psz_string + 1);  //. %s는 값을 주소로 보고 해당 주소에 있는 값을 \0이 나올 때까지 출력.
	////printf("%s\n\n", *(char*)psz_string + 1);  //. 바로 전 줄의 주석 처리 내용에 의해 *를 붙이면 char 사이즈 1만큼 옵셋 된 주소에 있는 값을 %s에 의해 다시 주소로 본다. 정상 작동 안하게 됨.


	//. p.310
	//char* psz_data = "1234 67890!";

	//printf("%s\n", psz_data);
	//printf("%s\n", psz_data++);
	//printf("%s\n", psz_data);

	//printf("%c\n", psz_data);  //. 앞에서 psz_data++에 의해 psz_data에는 문자 2가 입력된 주소가 값으로 들어가 있음. 주소를 %c 아스키 문자로 해석하려니 예상 못하는 문자라 나옴.
	//printf("%c\n", *psz_data);
	//printf("%c\n", *psz_data++);
	//printf("%c\n", *--psz_data);

	//printf("%c\n", (*psz_data) + 3);
	//printf("%c\n", *psz_data + 3); //. +연산보다 *(간접지정) 연산이 우선순위가 더 높기 때문에 괄호는 효과 없지만, 가독성을 위해 하는 편이 좋음.


	//. p.306
	//char* psz_list[3] = { "Test", "String", "Data" };
	//char** ppsz_list = psz_list;

	//char sz_buffer[32] = { "TestString" };
	//char* psz_buffer = sz_buffer;

	//printf("%c\n", **psz_list);  //. 배열 선언 자체가 1중 포인터로 선언과 의미 같음. 따라서 2중 포인터로 값을 출력 가능.
	//printf("%c\n", *psz_list);  //. psz_list[0]에 값으로 들어 있는 주소 자체를 %c인 아스키 코드로 해석해서 이상한 글자 나옴.
	//printf("%c\n", *psz_list[1]);
	//printf("%c\n", *psz_buffer);

	//printf("%s\n", psz_list[0]);
	//printf("%s\n", *(ppsz_list + 1));



	//. +a
	//char* psz_data = "Test...!!!";

	////printf("s: %s", *psz_data);
	//printf("c: %c\n", *psz_data);
	//printf("c: %c\n\n", *(psz_data+2));


	//. p.298
	//int* pn_data = NULL;
	//pn_data = (int*)malloc(sizeof(int) * 4);
	//memset(pn_data, 0, sizeof(int) * 4);

	//*(pn_data) = 10;
	//*(pn_data + 1) = 20;

	//printf("pn_data: %d\n", *(pn_data));
	//printf("pn_data + 1: %d\n\n", *(pn_data + 1));

	//free(pn_data);  //. malloc()로 동적으로 받은 메모리 반환

	//. p.295
	//char szName[16] = { 0 };
	//char* pszName = szName;

	//sprintf_s(pszName, sizeof(szName), "%s", "Centaucyan");
	//puts(szName);


	//. p.294
	//char* psz_data = "Test string!";

	//printf("%zu\n", sizeof(psz_data));
	//printf("%zu\n", sizeof(*psz_data));

	//printf("%zu\n", sizeof(psz_data + 1));  // *psz_data는 char로 선언되어 있으므로 주소 번지 1 증가. 64비트 시스템에서는 64비트로 주소 저장.
	//printf("%zu\n", sizeof(*psz_data + 1));  // *psz_data는 char로 선언되어 있으므로 1바이트 이지만 뒤에 int 연산으로 인해 승격된다.
	//printf("%zu\n", sizeof(*(psz_data + 1)));


	//. p.285
	//int n_data = 10;
	//int* pn_data = &n_data;

	//printf("n_data value: %d, pn_data point_value: %d\n", n_data, *pn_data);
	//printf("n_data addr: %p, pn_data value: %p\n\n", &n_data, pn_data);

	//*pn_data = 60;
	//printf("=== After change *pn_data ===\n");
	//printf("n_data value: %d, pn_data point_value: %d\n\n", n_data, *pn_data);

	//n_data = 100;
	//printf("=== After change n_data ===\n");
	//printf("n_data value: %d, pn_data point_value: %d\n\n", n_data, *pn_data);
}