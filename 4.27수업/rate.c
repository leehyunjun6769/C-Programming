#include <stdio.h>

int main()
{
	double rate;
	double usd;
	int krw;

	printf("ȯ���� �Է��Ͻÿ� : ");
	scanf("%lf", &rate);
	printf("��ȭ �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("��ȭ %d���� %lf�޷��Դϴ�.", krw, usd);
}