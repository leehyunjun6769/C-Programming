#include <stdio.h>

int main(void)
{
	int a;
	double b = 100000;
	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf("%d", &a);

	printf("\n������ �����µ� �ɸ��� �ð�(����: ��) : %.2lf", b / a);

	return 0;
}