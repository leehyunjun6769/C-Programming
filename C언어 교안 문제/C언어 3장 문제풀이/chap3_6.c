#include <stdio.h>

// �޿����� ������ ���ϱ�
int main(void)
{
	double moon, earth; // moon�� ���� ������, earth�� ������ ������, weight�� ������

	printf("�����Ը� �Է��Ͻÿ�(����: kg):");
	scanf("%lf", &earth);

	moon = earth * 0.17;

	printf("�޿����� �����Դ� %.2lf�Դϴ�.", moon);
}