#include <stdio.h>
//#include <conio.h>  //. _getch(), _getche()에 대한 선언 포함. 현재는 stdio.h에도 포함되어 있음.

void main()
{
	//. p.147
	char* ch;
	
	printf("Input Ch over 3ch: ");
	ch = getchar();
	ch = getchar();
	putchar(ch);



	//. p.143
	/*float fInput1 = 0, fInput2 = 0;
	printf("Input float data: ");

	scanf_s("%f %f", &fInput1, &fInput2);
	printf("%.2f + %.2f == %.2f\n", fInput1, fInput2, fInput1 + fInput2);*/

	//. p.139
	/*int nInput = 0;
	printf("%d\n", nInput);
	printf("Input number: ");

	scanf_s("%d", &nInput);
	printf("%d\n", nInput);*/


	//. p.137
	//__int64 nData = 0xFFFFFFFF;  //. __int64라는 자료형은 Visual Studio에서 제공하는 자료형.

	//printf("%d\n", nData);
	//printf("%d\n", nData + 10);
	//printf("%u\n", nData);
	//printf("%u\n", nData + 10);
	//printf("%I64u\n", nData + 10);


	//. p.130
	/*char num = 6;
	printf("%p\n",num);
	printf("%p\n",&num);*/

	//. p.130
	/*char* pszData = "Test string!";

	printf("%s\n", pszData);
	printf("%p\n", pszData);
	printf("%p\n", &pszData);*/


	//. p121
	//char szBuffer[128] = { 0 };  //. 배열 선언시 []안의 단위는 자료형 단위. char형 자료형이 128개 있다는 의미.
	//printf("Input your name: ");
	//gets(szBuffer);

	//printf("Your name is ");
	//puts(szBuffer);


	//////////

	/*char ch;

	ch = _getch();
	printf("%c\n", ch);

	ch = _getche();
	printf("%c\n", ch);*/

	//. p113
	/*char ch;
	ch = getchar();
	putchar(ch);
	ch = getchar();
	putchar(ch);
	ch = getchar();
	putchar(ch);
	char* abab = "testabc";
	putchar(abab);
	printf(abab);*/

}