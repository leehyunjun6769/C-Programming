#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	while (!(a == 1 || a == 0))
	{
		int s = a % 2;
		printf("%d", s);
		a /= 2;
	}
	printf("%d", a);
}