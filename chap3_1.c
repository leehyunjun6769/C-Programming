#include <stdio.h>

int main(void)
{
	int a;
	double b = 100000;
	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%d", &a);

	printf("\n연봉을 모으는데 걸리는 시간(단위: 년) : %.2lf", b / a);

	return 0;
}