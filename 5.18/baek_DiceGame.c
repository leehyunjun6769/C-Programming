#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int n = 0; // ������ ������ �ο��� �˷��ִ� ����
	int count = 0; // ������ Ƚ���� �˷��ִ� ����
	int d1 = 0; // ù��° ����
	int d2 = 0; // �ι�° ����
	int d3 = 0; // ����° ����
	int max = 0;   // ������ �ִ밡��

	scanf("%d", &n); // �ο� �Է�

	while (count < n) // �ο��� ���� �׸�ŭ ���� ���� ex) 3�� --> 3�� ���� ���� 
	{
		scanf("%d %d %d", &d1, &d2, &d3); // 1,2,3 �ֻ��� ���ڸ� �˷���



		if (d1 == d2 && d2 == d3) // ���� �ֻ��� ���ڰ� ���� �� 
		{
			if (10000 + d1 * 100 > max) {  // 
				max = 10000 + d1 * 1000;
			}
		}
		else if (d1 == d3 || d1 == d2)
		{
			if (1000 + d1 * 100 > max)
			{
				max = 1000 + d1 * 100;
			}
		}
		else if (d2 == d3)
		{
			if (1000 + d2 * 100 > max)
			{
				max = 1000 + d2 * 100;
			}
		}
		else
		{
			if (d1 > d2 || d1 > d3)
			{
				if (d1 * 100 > max)
				{
					max = d1 * 100;
				}
			}
			else if (d2 > d3 && d2 > d1)
			{
				if (d2 * 100 > max)
				{
					max = d2 * 100;
				}
			}
			else
			{
				if (d3 * 100 > max)
				{
					max = d3 * 100;
				}
			}
		}
		count++;
		printf("%d\n", max);
	}
	printf("%d\n", max);

}