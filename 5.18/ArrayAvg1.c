#include <stdio.h>

int main()
{
	int score[5];
	int avg = 9;
	int sum = 0;
	int n = 0;

	printf("�л����� ������� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < n; i++)
	{
		sum += score[i];
	}
	avg = sum / 5;
	printf("���� ��� = %d", avg);
}