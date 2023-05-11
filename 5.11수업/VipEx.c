#include <stdio.h>

int main()
{
	int price = 0;
	char grade;
	int answer = 0;

	printf("금액을 입력하세요. ");
	scanf("%d", &price);

	if (price > 100 && 100000 > price)
	{
		return price;
	}
	else
	{
		printf("오류입니다.");
	}


	printf("\n할인율을 입력하세요. ");
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
		printf("등급을 다시 입력해주세요.");
	}

	printf("총 금액은 %d입니다.", answer);

}