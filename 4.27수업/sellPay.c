#include <stdio.h>

int main()
{
	int money, change;
	int price, c5000, c1000, c500, c100;

	printf("���ǰ��� �Է��Ͻÿ�: ");
	scanf("%d", &money);
	printf("������ �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", &price);
	printf("�Ž��� ���� ������ �����ϴ�.");
	change = price - money;

	c5000 = change / 5000;
	change = change % 5000;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change % 100;

	printf("\n��õ����: %d��\n", c5000);
	printf("\nõ����: %d��\n", c1000);
	printf("\n����� ����: %d��\n", c500);
	printf("\n��� ����: %d��\n", c100);
}