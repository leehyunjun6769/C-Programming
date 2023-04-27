#include <stdio.h>

int main()
{
	// 1. 정수형 변수 2개 선언
	int a, b;
	
	// 2. 출력함수로 글자 입력받고 입력함수로 정수 2개 입력받음. 따로따로 받음
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);
	printf("정수를 입력하시오 : ");
	scanf("%d", &b);
	// 3. if로 a가 b의 약수인지 확인함
	if (a % b == 0)
	{	
		//	  맞으면 약수입니다 출력. 
		printf("약수입니다.");
	}
	else
	{

	}
	return 0;


	
	// 리턴 0;
	
}