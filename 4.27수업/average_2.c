#include <stdio.h>

int main()
{
	double num1, num2, num3;
	double sum, avg;

	printf("3���� �Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	sum = num1 + num2 + num3;
	avg = sum / 3;

	printf("�հ� = %.2lf\n", sum);
	printf("��� = %.2lf\n", avg);

	return 0;
}