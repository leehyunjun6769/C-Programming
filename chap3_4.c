#include <stdio.h>

int main(void)
{
	double den = 9.0;
	double mol = 5.0;
	double f, c; // den�� �и�, mol�� ����, f�� ȭ��. �Ǽ������� ������.

	printf("ȭ������ �Է��Ͻÿ� : ");
	scanf("%lf", &f);

	c = (mol / den) * (f - 32.0);

	printf("�������� %.2lf�Դϴ�.", c);
}