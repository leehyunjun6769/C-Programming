#include <stdio.h>

int main(void)
{
	double flat;
	double pyeong = 3.3058;
	double meter = 0;

	printf("���� �Է��ϼ��� :");
	scanf("%lf", &flat);

	meter = flat * pyeong;

	printf("%lf�������Դϴ�.", meter);
}