#include <stdio.h>

int main()
{

	int a; //정수로 a라는 변수 선언

	printf("아스키 코드 값을 입력하시오: "); // 출력값 선언
	scanf("%d", &a); // 정수로 입력받을 수 있는 함수 선언

	printf("문자:%c입니다", a); // 정수형 a를 char로 형변환 해줌. (%c)
}