#include <stdio.h>

int main(void)
{
	double len, wid, hei; // len은 길이, wid은 너비, hei는 높이
	double vol = 0; // vol은 부피

	printf("상자의 가로 세로 높이를 한번에 입력 : "); // 
	scanf("%lf %lf %lf", &len, &wid, &hei);

	vol = len * wid * hei;

	printf("상자의 부피는 %lf입니다.", vol);
}