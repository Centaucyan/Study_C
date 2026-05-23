#include <stdio.h>
// #include <stdlib.h>  //. _countof()
// #include <conio.h>  //. _getch(), _getche()에 대한 선언 포함. 현재는 stdio.h에도 포함되어 있음.

void main(void)
{
	//. p.276-4
	int n_input = 0;
	int n_max = 0, n_min = 0;

	for (int i = 0; i < 5; ++i) {
		printf("%d Input int values: ", i+1);
		scanf_s("%d", &n_input, sizeof(n_input));
		
		if (i == 0) {
			n_max = n_min = n_input;
		}
		else if (n_input > n_max) {
			n_max = n_input;
		}
		else if (n_input < n_min) {
			n_min = n_input;
		}
		else {
			continue;
		}
	}
	
	printf("Max value is %d\nMin value is %d\n", n_max, n_min);


	//. p.276-3
	//int a = 0, b = 0, m_result = 0;

	//for (a = 1; a < 10; ++a) {
	//	printf("=== %d단 ===\n", a);

	//	for (b = 1; b < 10; ++b) {
	//		m_result = a * b;
	//		printf("%d x %d = %d\n", a, b, m_result);
	//	}
	//	printf("\n");
	//}


	//. p.276-2
	//int n_num_4t = 0, n_sum_4t = 0;

	//for (int i = 10; i <= 100; ++i) {
	//	if ((i % 4) == 0) {
	//		n_num_4t += 1;
	//		n_sum_4t += i;
	//	}
	//}

	//printf("n_num4t: %d __ n_sum4t: %d\n", n_num_4t, n_sum_4t);


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


	//. p.264__2���� �迭���� �Ϳ� ��ø �ݺ��� ���
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