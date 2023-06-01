#include <stdio.h>

int main(void)
{
	int i; // 단 안에 1~9까지를 알려줌 
	int n = 0; // 단의 시작을 알려줌
	int k; // 단의 시작 값을 처리해줌. 
	int j = 0; // 단의 끝을 알려주는 수
	int temp =0; // 에러가 날 때 저장값.

	while (1)
	{
		printf("단수를 입력하세요 : ");
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