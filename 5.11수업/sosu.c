

#include <stdio.h>


int get_integer(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
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
		printf("\n%d�� �Ҽ��Դϴ�.\n", n);
	}
	else
	{
		printf("\n%d�� �Ҽ��� �ƴմϴ�.\n", n);
	}

	return 0;
}