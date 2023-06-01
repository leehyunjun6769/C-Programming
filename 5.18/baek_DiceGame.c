#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int n = 0; // 게임의 참가한 인원을 알려주는 변수
	int count = 0; // 게임의 횟수를 알려주는 변수
	int d1 = 0; // 첫번째 숫자
	int d2 = 0; // 두번째 숫자
	int d3 = 0; // 세번째 숫자
	int max = 0;   // 숫자의 최대가격

	scanf("%d", &n); // 인원 입력

	while (count < n) // 인원을 쓰면 그만큼 게임 진행 ex) 3명 --> 3번 게임 진행 
	{
		scanf("%d %d %d", &d1, &d2, &d3); // 1,2,3 주사위 숫자를 알려줌



		if (d1 == d2 && d2 == d3) // 세개 주사위 숫자가 같을 때 
		{
			if (10000 + d1 * 100 > max) {  // 
				max = 10000 + d1 * 1000;
			}
		}
		else if (d1 == d3 || d1 == d2)
		{
			if (1000 + d1 * 100 > max)
			{
				max = 1000 + d1 * 100;
			}
		}
		else if (d2 == d3)
		{
			if (1000 + d2 * 100 > max)
			{
				max = 1000 + d2 * 100;
			}
		}
		else
		{
			if (d1 > d2 || d1 > d3)
			{
				if (d1 * 100 > max)
				{
					max = d1 * 100;
				}
			}
			else if (d2 > d3 && d2 > d1)
			{
				if (d2 * 100 > max)
				{
					max = d2 * 100;
				}
			}
			else
			{
				if (d3 * 100 > max)
				{
					max = d3 * 100;
				}
			}
		}
		count++;
		printf("%d\n", max);
	}
	printf("%d\n", max);

}