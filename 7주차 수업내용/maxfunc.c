#include <stdio.h>

int max(int x, int y)
{
	return x > y ? x : y; // ���׿�����. ?�ڿ� true�� : �տ� ����, false�� : �ڿ� ����.
}

int main()
{
	int x, y;

	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	printf("�� ū ���� %d�Դϴ�.\n", max(x,y));

}