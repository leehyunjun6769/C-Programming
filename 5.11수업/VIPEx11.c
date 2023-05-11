#include <stdio.h>

int solution(int price, char* grade)
{
	int answer = 0;

	if (grade == "V")
	{
		answer = price - (price * 0.15);
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

	return answer;
}


int main()
{
	int price1 = 2500;
	char* grade1 = "V";
	int ret = solution(price1, grade1);

	printf("%d", ret);

}