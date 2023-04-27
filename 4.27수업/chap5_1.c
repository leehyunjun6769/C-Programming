#include <stdio.h>

int main()
{
	// 정수 2개 받을 변수 2개 선언 a, b
	int a, b;

	// 출력함수로 글자 출력
	printf("정수 2개를 입력하시오: ");

	// 입력함수로 정수 두개 받아줌.
	scanf("%d %d", &a, &b);
	 
	// 몫(나누기) 계산식 / 수식 사용
	printf("몫 : %d\n", a / b);
	// 나머지값 입력 % 수식 사용
	printf("나머지 : %d", a % b);
}