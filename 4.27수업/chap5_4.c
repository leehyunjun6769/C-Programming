#include <stdio.h>

int main()
{
	// Ű(cm)��, ��Ʈ�� �������� ����������?
	int cm;
	int pit = 12;
	double a = 0;

	// 1��ġ�� 2.54��� ���� �Ǽ������� ��������
	double inc = 2.54;

	//����Լ��� ���� ���
	printf("Ű�� �Է��Ͻÿ�(cm): ");

	// �Է��Լ��� Ű �Է¹���
	scanf("%d", &cm);

	a = cm / pit % (double)inc;

	

	// ����Լ��� ��ġ ����
}