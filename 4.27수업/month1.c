#include <stdio.h>

int main()
{
	int month, days;

	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &month);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 2:
		days = 28;
		break;
	case 4:
	case 6:
	case9:
	case 11:
		days = 30;
		break;

	default:
		printf("���ϼ���..?");
		break;
	}
	printf("%d���� �ϼ��� %d�Դϴ�.", month, days);
	
	return 0;
}