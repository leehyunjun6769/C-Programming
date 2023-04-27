#include <stdio.h>

int main()
{
	int grade, n;
	float sum, average;

	// 필요한 변수들 초기화
	n = 0;
	sum = 0;
	grade = 0;

	printf("성적 입력을 종료하려면 음수를 입력하시오.\n");

	// 성적을 입력받아 합계를 구하고 학생 수를 센다
	while (grade >= 0)
	{
		printf("성적을 입력하시오: "); // grade가 0보다 크거나 같으면 계속 반복문
		scanf("%d", &grade); // 입력받기

		sum += grade; // sum = sum + grade. 점수를 계속 더해줌.
		n++; // n은 과목의 개수를 알려줌.
	}

	sum = sum - grade; // 마지막 데이터를 제거해줌. sum에 마지막 나온 데이터 -n을 제거해줌
	n--; //마지막 데이터를 제거해줌 . 과목의 개수를 딱 맞춤
	// 평균을 계산하고 화면에 출력한다.
	average = sum / n; // grade 점수 합계 / 과목의 개수
	printf("성적의 평균은 %f입니다.\n", average); 

	return 0;
}