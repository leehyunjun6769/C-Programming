#include <stdio.h>

int main(void)
{
	double flat;
	double pyeong = 3.3058;
	double meter = 0;

	printf("평을 입력하세요 :");
	scanf("%lf", &flat);

	meter = flat * pyeong;

	printf("%lf평방미터입니다.", meter);
}