#include <stdio.h>

int main(void)
{
	int n, a, b, i = 1;
	scanf("%d", &n);

	while (i <= n)
	{
		scanf("%d %d", &a, &b);
		printf("%d", a + b);
		i++;
	}
	return 0;
}