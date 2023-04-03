#include <stdio.h>

int main()
{
	int A, B;

	printf("숫자를 두개 입력하세요 : ");
	scanf("%d %d", &A, &B);

	if (A > B)
	{
		printf(">");
	}
	else if (A < B)
	{
		printf("<");
	}
	else
	{
		printf("**");
	}


	return 0;
}