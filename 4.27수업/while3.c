#include <stdio.h>

int main(void)
{
	int n, sum = 0;
	int i = 1;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);

	while (i <= n)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("1���� %d������ ¦������ %d�Դϴ�.", n, sum);
	return 0;
}
