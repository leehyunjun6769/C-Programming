#include <stdio.h>

int main()
{
	// 3개의 정수형 변수를 선언.
	int a, b, c;

	// 출력함수로 글자 출력
	printf("정수 3개를 입력하시오 :");

	// 입력함수로 입력받을 정수값 3개 입력받음.
	scanf("%d %d %d", &a, &b, &c);

	// 출력함수로 최대값 출력
	if (a < b && b > c)
	{
		printf("최대값은 %d입니다.", b);
	}
	else if (b<a && a>c)
	{
		printf("최대값은 %d입니다.", a);
	}
	else
	{
		printf("최대값은 %d입니다.", c);
	}
}