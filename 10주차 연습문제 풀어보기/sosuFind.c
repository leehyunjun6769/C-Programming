#include <Stdio.h>

int main()
{
	int n = get_integer();

	if (sosu(n) == 0)
	{
		printf("�Ҽ��� �ƴմϴ�.");
	}
	else
	{
		printf("�Ҽ��Դϴ�.");
	}

	return 0;
}

int get_integer()
{
	int n;

	printf("������ �Է��Ͻÿ� : ");
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