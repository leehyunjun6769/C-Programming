#include <stdio.h>

int main()
{
	int A, B;

	printf("���ڸ� �ΰ� �Է��ϼ��� : ");
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