#include <stdio.h>


//n의 제곱 구하기
int main()
{
	int n; //변수 설정

	printf("=======================\n");
	printf("   n	  n의 제곱\n");
	printf("=======================\n");

	n = 1;
	while (n <= 10)
	{
		printf("%5d  %5d\n", n, n * n);
		n++;
	}
	return 0;
}