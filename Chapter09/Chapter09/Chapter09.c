#include <stdio.h>  //. prinf(), scanf(), sprintf(), _getch(), _getche(), gets(), puts() , stdlen()
#include <stdlib.h>  //. _countof(), malloc(), free()
#include <string.h>  //. memset()
// #include <conio.h>  //. _getch(), _getche()에 대한 선언 포함. 현재는 stdio.h에도 포함되어 있음.

void main(void)
{
	//. p.306
	char* psz_list[3] = { "Test", "String", "Data" };
	char** ppsz_list = psz_list;

	char sz_buffer[32] = { "TestString" };
	char* psz_buffer = sz_buffer;

	printf("%c\n", **psz_list);  //. 배열 선언 자체가 1중 포인터로 선언과 의미 같음. 따라서 2중 포인터로 값을 출력 가능.
	printf("%c\n", *psz_list);  //. psz_list[0]에 값으로 들어 있는 주소 자체를 %c인 아스키 코드로 해석해서 이상한 글자 나옴.
	printf("%c\n", *psz_list[1]);
	printf("%c\n", *psz_buffer);

	printf("%s\n", psz_list[0]);
	printf("%s\n", *(ppsz_list + 1));



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