#include <stdio.h>

int main()
{
	int money, change;
	int price, c5000, c1000, c500, c100;

	printf("물건값을 입력하시오: ");
	scanf("%d", &money);
	printf("투입한 금액을 입력하시오 : ");
	scanf("%d", &price);
	printf("거스름 돈은 다음과 같습니다.");
	change = price - money;

	c5000 = change / 5000;
	change = change % 5000;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change % 100;

	printf("\n오천원권: %d장\n", c5000);
	printf("\n천원권: %d장\n", c1000);
	printf("\n오백원 동전: %d장\n", c500);
	printf("\n백원 동전: %d장\n", c100);
}