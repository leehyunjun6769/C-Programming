#include <stdio.h>

// 달에서의 몸무게 구하기
int main(void)
{
	double moon, earth; // moon은 달의 몸무게, earth는 지구의 몸무게, weight는 몸무게

	printf("몸무게를 입력하시오(단위: kg):");
	scanf("%lf", &earth);

	moon = earth * 0.17;

	printf("달에서의 몸무게는 %.2lf입니다.", moon);
}