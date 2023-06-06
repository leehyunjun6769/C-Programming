#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void);

int main(void)
{
	int toss;
	int heads = 0;
	int tails = 0;
	srand((unsigned)time(NULL));

	for (toss = 0; toss < 100; toss++)
	{
		if (coin_toss() == 1)
		{
			heads++;
		}
		else
		{
			tails++;
		}
		
	}
	printf("������ �ո�: %d\n", heads);
	printf("������ �޸�: %d\n", tails);
	return 0;
}

int coin_toss(void)
{
	int head = rand() % 2;
	return head;
}