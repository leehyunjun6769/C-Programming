#include<stdio.h>

int main(void)
{
	int result, num;
	scanf("%d", &num);
	for (int i = 2; i <= num; i++)
	{
		result = 0;
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0)
				result++;
		}
		if (result == 1)
		{
			printf("%d ", i);
		}
	}
}