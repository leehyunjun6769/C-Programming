#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// 1. 1. 가위, 2. 바위, 3. 보.. 4. 입력받을 변수를 정수로 선언

	int user, com;
	srand(time(NULL));
	com = rand() % 3 + 1;
	// 2. 출력함수로 글자 적고 입력함수로 하나 선택받음
	printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오 : ");
	scanf("%d", &user);
	// 3. if 함수로 == 로 가위 바위 보 인지를 지정해줌. 
	//	  안에 4.%3+1 로 난수 함수 넣어줌
	//    사용자가 이기면 사용자가이겼습니다 .지면 사용자가 졌습니다. 비기면 사용자가 비겼습니다 출력
	if (user == 1 && com == 2)
		printf("컴퓨터 승");
	else if (user == 1 && com == 3)
		printf("사용자 승");
	else if (user == 2 && com == 1)
		printf("사용자 승");
	else if (user == 2 && com == 3)
		printf("컴퓨터 승");
	else if (user == 3 && com == 1)
		printf("컴퓨터 승");
	else if (user == 3 && com == 2)
		printf("사용자 승");
	else
		printf("비겼음");

	return 0;
}