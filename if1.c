#include <stdio.h>

int main()
{
	int a;

	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		printf("�Էµ� ������ ¦���Դϴ�. ");
	}
	else
	{
		printf("�Էµ� ������ Ȧ���Դϴ�. ");
	}

	return 0;
}