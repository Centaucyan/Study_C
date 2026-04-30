#include <stdio.h>
// #include <stdlib.h>  //. _countof()
// #include <conio.h>  //. _getch(), _getche()에 대한 선언 포함. 현재는 stdio.h에도 포함되어 있음.

void main(void)
{
	//. p.294
	char* psz_data = "Test string!";

	printf("%zu\n", sizeof(psz_data));
	printf("%zu\n", sizeof(*psz_data));

	printf("%zu\n", sizeof(psz_data + 1));  // 주소 번지 1 증가. 여전히 64비트 시스템에서는 64비트로 주소 저장.
	printf("%zu\n", sizeof(*psz_data + 1));  // *psz_data는 char로 선언되어 있으므로 1바이트 이지만 뒤에 int 연산으로 인해 승격된다.
	printf("%zu\n", sizeof(*(psz_data + 1)));


	//. p.285
	/*int n_data = 10;
	int* pn_data = &n_data;

	printf("n_data value: %d, pn_data point_value: %d\n", n_data, *pn_data);
	printf("n_data addr: %p, pn_data value: %p\n\n", &n_data, pn_data);

	*pn_data = 60;
	printf("=== After change *pn_data ===\n");
	printf("n_data value: %d, pn_data point_value: %d\n\n", n_data, *pn_data);

	n_data = 100;
	printf("=== After change n_data ===\n");
	printf("n_data value: %d, pn_data point_value: %d\n\n", n_data, *pn_data);*/
}