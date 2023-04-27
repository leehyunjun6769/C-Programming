#include <stdio.h>

int main(void)
{
	int i, n = 0;
	printf("단수를 입력하세요 : ");
	scanf("%d", &n);

	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n",n, i, n * i);
	}
}