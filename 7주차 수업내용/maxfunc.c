#include <stdio.h>

int max(int x, int y)
{
	return x > y ? x : y; // 삼항연산자. ?뒤에 true면 : 앞에 값을, false면 : 뒤에 값을.
}

int main()
{
	int x, y;

	printf("정수 2개를 입력하시오: ");
	scanf("%d %d", &x, &y);

	printf("더 큰 값은 %d입니다.\n", max(x,y));

}