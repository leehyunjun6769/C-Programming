#include <stdio.h>

int main(void)
{
	double len, wid, hei; // len�� ����, wid�� �ʺ�, hei�� ����
	double vol = 0; // vol�� ����

	printf("������ ���� ���� ���̸� �ѹ��� �Է� : "); // 
	scanf("%lf %lf %lf", &len, &wid, &hei);

	vol = len * wid * hei;

	printf("������ ���Ǵ� %lf�Դϴ�.", vol);
}