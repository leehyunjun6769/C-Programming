#include <stdio.h>
#include <string.h>

int main()
{
	char arr[10001];
	int koi = 0, ioi = 0;

	scanf("%s", arr); // �迭 ��ü�� �޸��� ���� �ּҸ� �˷���. �׷��� &�� �� �ᵵ ��.

	for (int i = 0; i < strlen(arr) - 2; i++)
	{
		if (arr[i] == 'i' && arr[i + 1] == 'o' && arr[i + 2] == 'i')
		{
			ioi++;
		}
		else if (arr[i] == 'k' && arr[i + 1] == 'o' && arr[i + 2] == 'i')
		{
			koi++;
		}
	}
	printf("%d\n%d", ioi, koi);
}