#include <stdio.h>

int main(void)
{
	double x, result; // ���׽��� x��

	printf("�Ǽ��� �Է��Ͻÿ�(����: kg):"); //�Ǽ��� ��¹���.
	scanf("%lf", &x); // printf�� �Է¹޴� �Լ�

	result = (3 * x * x) + (7 * x) + 11;

	printf("���׽��� ���� %.2lf", result);
}