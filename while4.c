#include <stdio.h>

int main(void)
{
	int n, sum = 0;
	int i = 0;


	while (i <5)
	{
		printf("���� �Է��Ͻÿ� : ");
		scanf("%d", &n);
		sum += n;
		i++;
	}
	printf("�հ�� % d�Դϴ�.", sum);
	return 0;
}