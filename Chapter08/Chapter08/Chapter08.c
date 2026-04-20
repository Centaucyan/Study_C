#include <stdio.h>

void main(void)
{
	//. p.276-1
	int n_sum = 0;
	//int i = 0;

	for (int i = 1; i <= 100; ++i) {
		n_sum += i;
	}
		
	printf("sum 1~100: %d", n_sum);


	//. p.269
	//char ch;

	//while (1) {
	//	//. case1
	//	if (ch = getche() == '/')
	//		break;

	//	//. Case2
	//	/*if ((ch = getchar()) == '/')
	//		break;
	//	putchar(ch);*/
	//}


	//. p.264__2차원 배열같은 것에 중첩 반복문 사용
	/*int x = 0, y = 0;
	
	while (y < 5) {
		x = 0;

		while (x < 4) {
			printf("*\t");
			x++;
		}

		putchar('\n');
		y++;
	}*/
}