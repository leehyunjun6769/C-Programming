#include <stdio.h>

int main()
{
	int a = 150, b = 266, c = 427, sum = 0;
	int t[10] = {0,};

	

	sum = a * b * c;
	printf("sum = %d\n", sum);

	while (1)
	{
		t[sum % 10] += 1;
		sum = sum / 10;

		if (sum == 0)
		{
			break;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", t[i]);
	}
	return 0;
	
}