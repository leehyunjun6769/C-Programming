#include <stdio.h>

int main()
{
	int i[5];

	i[0] = 10;
	i[1] = 20;
	i[2] = 30;
	i[3 + 1] = 50;

	printf("%d", i[4]);

}