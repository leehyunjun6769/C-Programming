#include <stdio.h>


int main(void)
{
	int i = 1;
	int n;
	int sum = 0;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);

	while (i <= n)
	{
		
		sum += i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);
	return 0;
}