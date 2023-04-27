#include <stdio.h>

int main()
{
	// 2개의 double형 실수 선언
	double a, b;

	// 출력함수로 글자 출력
	printf("실수를 입력하시오 : ");

	// 입력함수로 2개의 실수 입력 받음.
	scanf("%lf %lf", &a, &b);

	// 출력함수로 합 출력
	printf("%.2f ", a + b);
	// 출력함수로 차 출력
	printf("%.2f ", a - b);
	// 출력함수로 곱 출력
	printf("%.2f ", a * b);
	// 출력함수로 몫 출력
	printf("%.2f ", a / b);
}