

#include <stdio.h>


int get_integer(void)
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	return n;
}

int is_prime(int n)
{
	int i;
	int j;
	int count = 0;
	for (i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				count += 1;
			}
		}
		if (count == 2)
		{
			printf("%d ", i);
		}
		count = 0;
	}

}
int main(void)
{
	int n;
	n = get_integer();

	if(is_prime(n) == 1)
	{
		printf("\n%d은 소수입니다.\n", n);
	}
	else
	{
		printf("\n%d은 소수가 아닙니다.\n", n);
	}

	return 0;
}