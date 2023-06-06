#include <Stdio.h>

int main()
{
	int n = get_integer();

	if (sosu(n) == 0)
	{
		printf("소수가 아닙니다.");
	}
	else
	{
		printf("소수입니다.");
	}

	return 0;
}

int get_integer()
{
	int n;

	printf("정수를 입력하시오 : ");
	scanf("%d", &n);

	return n;
}

int sosu(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}