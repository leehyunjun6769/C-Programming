#include <stdio.h>


//n�� ���� ���ϱ�
int main()
{
	int n; //���� ����

	printf("=======================\n");
	printf("   n	  n�� ����\n");
	printf("=======================\n");

	n = 1;
	while (n <= 10)
	{
		printf("%5d  %5d\n", n, n * n);
		n++;
	}
	return 0;
}