#include <stdio.h>

int main(void)
{
	float a;
	double b = 1609;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%f", &a);

	printf("%.1f ������ %.2lf�����Դϴ�.",a, a * b);
}