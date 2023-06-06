#include <stdio.h>

int factorial(int n);
int combianation(int n, int r);
int get_integer();

int main()
{
	int a = get_integer(); // 정수를 입력 받아서 a에 초기화 해줌
	int b = get_integer(); // 정수를 입력 받아서 b에 초기화 해줌

	printf("C(%d, %d) = %d", a, b, combianation(a, b)); // a,b값을 알려주고, combination식을 호출함.
}

int factorial(int n)
{
	int i, result = 1;  // i 선언, result = 1로 선언. *해야 되니까 1로 선언
	
	for (i = 1; i <= n; i++) // for문으로 원하는 값 까지 돌림.
	{
		result *= i;
	}
	return result; // 결과 값 반환
}

int combianation(int n, int r)
{
	return(factorial(n) / (factorial(r) * factorial(n - r))); //combination으로 매개변수 2개 선언 후 factorial값을 대입해 계산식 선언.
}

int get_integer() // 정수를 입력 받는 함수 선언.
{
	int n;
	printf("정수를 입력하시오 : ");
	scanf("%d", &n);
	return n;
}

