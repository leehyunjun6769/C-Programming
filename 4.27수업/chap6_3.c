#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// 1. 1. ����, 2. ����, 3. ��.. 4. �Է¹��� ������ ������ ����

	int user, com;
	srand(time(NULL));
	com = rand() % 3 + 1;
	// 2. ����Լ��� ���� ���� �Է��Լ��� �ϳ� ���ù���
	printf("(1:���� 2:���� 3:��) �߿��� �ϳ��� �����Ͻÿ� : ");
	scanf("%d", &user);
	// 3. if �Լ��� == �� ���� ���� �� ������ ��������. 
	//	  �ȿ� 4.%3+1 �� ���� �Լ� �־���
	//    ����ڰ� �̱�� ����ڰ��̰���ϴ� .���� ����ڰ� �����ϴ�. ���� ����ڰ� �����ϴ� ���
	if (user == 1 && com == 2)
		printf("��ǻ�� ��");
	else if (user == 1 && com == 3)
		printf("����� ��");
	else if (user == 2 && com == 1)
		printf("����� ��");
	else if (user == 2 && com == 3)
		printf("��ǻ�� ��");
	else if (user == 3 && com == 1)
		printf("��ǻ�� ��");
	else if (user == 3 && com == 2)
		printf("����� ��");
	else
		printf("�����");

	return 0;
}