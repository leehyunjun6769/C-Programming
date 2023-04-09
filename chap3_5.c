#include <stdio.h>

int main(void)
{
	double x, result; // 다항식의 x값

	printf("실수를 입력하시오(단위: kg):"); //실수를 출력받음.
	scanf("%lf", &x); // printf를 입력받는 함수

	result = (3 * x * x) + (7 * x) + 11;

	printf("다항식의 값은 %.2lf", result);
}