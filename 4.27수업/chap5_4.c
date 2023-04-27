#include <stdio.h>

int main()
{
	// 키(cm)값, 피트를 선언해줌 정수형으로?
	int cm;
	int pit = 12;
	double a = 0;

	// 1인치가 2.54라는 것을 실수형으로 선언해줌
	double inc = 2.54;

	//출력함수로 글자 출력
	printf("키를 입력하시오(cm): ");

	// 입력함수로 키 입력받음
	scanf("%d", &cm);

	a = cm / pit % (double)inc;

	

	// 출력함수로 인치 구함
}