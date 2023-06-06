#include <stdio.h>

// amount가 양수이면 입금, 음수이면 출금
void save(int amount)
{
	static long balance = 0;

	if (amount >= 0)
	{
		printf("%d \t\t", amount);
	}
	else
	{
		printf("\t %d \t", -amount);
	}
	balance += amount;
	printf("%d\n", balance);
}

int main()
{
	printf("입금\t출금\t잔고\n");
	save(10000);
	save(-10000);
	save(50000);
	save(10000);
	
	return 0;
}