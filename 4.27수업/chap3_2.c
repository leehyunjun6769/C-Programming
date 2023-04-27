#include <stdio.h>

int main(void)
{
	float a;
	double b = 1609;

	printf("마일을 입력하시오: ");
	scanf("%f", &a);

	printf("%.1f 마일은 %.2lf미터입니다.",a, a * b);
}