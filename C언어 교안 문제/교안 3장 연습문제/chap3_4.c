#include <stdio.h>

int main(void)
{
	double den = 9.0;
	double mol = 5.0;
	double f, c; // den은 분모, mol은 분자, f는 화씨. 실수형으로 선언함.

	printf("화씨값을 입력하시오 : ");
	scanf("%lf", &f);

	c = (mol / den) * (f - 32.0);

	printf("섭씨값은 %.2lf입니다.", c);
}