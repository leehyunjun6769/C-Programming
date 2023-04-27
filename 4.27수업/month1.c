#include <stdio.h>

int main()
{
	int month, days;

	printf("달을 입력하시오 : ");
	scanf("%d", &month);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 2:
		days = 28;
		break;
	case 4:
	case 6:
	case9:
	case 11:
		days = 30;
		break;

	default:
		printf("뭐하세요..?");
		break;
	}
	printf("%d월의 일수는 %d입니다.", month, days);
	
	return 0;
}