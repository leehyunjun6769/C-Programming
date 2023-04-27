#include <stdio.h>

int main(void)
{
	int a, b, total, average;

	printf("두 과목의 점수를 입력하세요: ");
	scanf("%d %d", &a, &b);

	total = a + b; // 과목 a와 과목 b의 합계를 total로 정의한다.
	average = total / 2; // 두 과목의 합계의 평균값

	if (average >= 95)
	{
		printf("Very Good");
	}
	else
	{
		printf("Just Good");
	}


}