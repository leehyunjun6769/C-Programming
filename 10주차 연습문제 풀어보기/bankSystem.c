#include <stdio.h>

// amount�� ����̸� �Ա�, �����̸� ���
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
	printf("�Ա�\t���\t�ܰ�\n");
	save(10000);
	save(-10000);
	save(50000);
	save(10000);
	
	return 0;
}