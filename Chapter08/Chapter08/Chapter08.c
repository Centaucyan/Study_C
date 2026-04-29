#include <stdio.h>

void main(void)
{
	//. p.276-2
	int n_num_4t = 0, n_sum_4t = 0;

	for (int i = 10; i <= 100; ++i) {
		if ((i % 4) == 0) {
			n_num_4t += 1;
			n_sum_4t += i;
		}
	}

	printf("n_num4t: %d __ n_sum4t: %d\n", n_num_4t, n_sum_4t);


	//. p.276-1
	//int n_sum = 0;
	////int i = 0;

	//for (int i = 1; i <= 100; ++i) {
	//	n_sum += i;
	//}
	//	
	//printf("sum 1~100: %d", n_sum);


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