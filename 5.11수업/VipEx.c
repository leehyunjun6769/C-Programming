#include <stdio.h>

int main()
{
	int price = 0;
	char grade;
	int answer = 0;

	printf("�ݾ��� �Է��ϼ���. ");
	scanf("%d", &price);

	if (price > 100 && 100000 > price)
	{
		return price;
	}
	else
	{
		printf("�����Դϴ�.");
	}


	printf("\n�������� �Է��ϼ���. ");
	scanf("%c", &grade);


	if (grade == "V")
	{
		answer = price - (price *0.15);
	}
	else if (grade == "G")
	{
		answer = price - (price * 0.1);
	}
	else if (grade == "S")
	{
		answer = price - (price * 0.05);
	}
	else
	{
		printf("����� �ٽ� �Է����ּ���.");
	}

	printf("�� �ݾ��� %d�Դϴ�.", answer);

}