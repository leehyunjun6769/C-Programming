#include <stdio.h>

int main()
{
	int score[5];
	int avg = 9;
	int sum = 0;
	int n = 0;

	printf("학생들이 몇명인지 입력하시오 : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < n; i++)
	{
		sum += score[i];
	}
	avg = sum / 5;
	printf("성적 평균 = %d", avg);
}