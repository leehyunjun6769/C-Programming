#include <stdio.h>

int main(void)
{
	int a, b, total, average;

	printf("�� ������ ������ �Է��ϼ���: ");
	scanf("%d %d", &a, &b);

	total = a + b; // ���� a�� ���� b�� �հ踦 total�� �����Ѵ�.
	average = total / 2; // �� ������ �հ��� ��հ�

	if (average >= 95)
	{
		printf("Very Good");
	}
	else
	{
		printf("Just Good");
	}


}