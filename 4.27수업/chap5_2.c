#include <stdio.h>

int main()
{
	// 2���� double�� �Ǽ� ����
	double a, b;

	// ����Լ��� ���� ���
	printf("�Ǽ��� �Է��Ͻÿ� : ");

	// �Է��Լ��� 2���� �Ǽ� �Է� ����.
	scanf("%lf %lf", &a, &b);

	// ����Լ��� �� ���
	printf("%.2f ", a + b);
	// ����Լ��� �� ���
	printf("%.2f ", a - b);
	// ����Լ��� �� ���
	printf("%.2f ", a * b);
	// ����Լ��� �� ���
	printf("%.2f ", a / b);
}