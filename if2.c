#include <stdio.h>

int main(void)
{
	char ch;

		printf("���ڸ� �Է��Ͻÿ� :");
		ch = getchar();

		if (ch >= 65 && ch <= 90)
		{
			printf("%c�� �빮���Դϴ�.\n", ch);
		}
		else if (ch >= 97 && ch <= 122)
		{
			printf("%c�� �ҹ����Դϴ�.\n", ch);
		}
		else if (ch >= 48 && ch <= 57)
		{
			printf("%c�� �����Դϴ�.\n", ch);
		}
		else
		{
			printf("%c�� ��Ÿ�����Դϴ�,\n", ch);

			return 0;
		}
}