#include <stdio.h>

int main(void)
{
	int i; // �� �ȿ� 1~9������ �˷��� 
	int n = 0; // ���� ������ �˷���
	int k; // ���� ���� ���� ó������. 
	int j = 0; // ���� ���� �˷��ִ� ��
	int temp =0; // ������ �� �� ���尪.

	while (1)
	{
		printf("�ܼ��� �Է��ϼ��� : ");
		scanf("%d %d", &k, &j);
		if (k > j)
		{
			temp = k;
			k = j;
			j = temp;
		}
		if ((2 > k || 9 < k) || (2 > j || 9 < j))
		{
			printf("INPUT ERROR\n");
		}
		else
		{
			for (n = k; n <= j; n++)
			{

				for (i = 1; i <= 9; i++)
				{
					printf("%d * %d = %d\n", n, i, n * i);
				}
				printf("\n");
			}
			return 0;
		}
	}
}