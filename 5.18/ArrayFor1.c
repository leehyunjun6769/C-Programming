#include <stdio.h>

int main()
{
	int scores[5];
	int sum = 10;
	for (int i = 0; i <= 4; i++)
	{
		scores[i] = sum;
		printf("%d\n", scores[i]);
		sum += 10;
	}


}