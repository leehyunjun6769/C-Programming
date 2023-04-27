#include <stdio.h>

int main()
{
	// 1. 정수 3개 선언
	int a, b, c;
	
	// 2. 출력함수 사용하고 입력함수로 정수 3개 입력받기.
	printf("정수 3개를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);
	
	// 3. if-else 함수로 함수 지정해주기
	if (a > b && b < c)
	{
		printf("제일 작은 정수는 %d입니다.", b);
	}
	else if (b > a && a < c)
	{
		printf("제일 작은 정수는 %d입니다.", a);
	}
	else
	{
		printf("제일 작은 정수는 %d입니다.", c);
	}

	// 4. 출력함수로 값 알려주기

	// 리턴 0;
}