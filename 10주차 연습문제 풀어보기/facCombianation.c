#include <stdio.h>

int factorial(int n);
int combianation(int n, int r);
int get_integer();

int main()
{
	int a = get_integer(); // ������ �Է� �޾Ƽ� a�� �ʱ�ȭ ����
	int b = get_integer(); // ������ �Է� �޾Ƽ� b�� �ʱ�ȭ ����

	printf("C(%d, %d) = %d", a, b, combianation(a, b)); // a,b���� �˷��ְ�, combination���� ȣ����.
}

int factorial(int n)
{
	int i, result = 1;  // i ����, result = 1�� ����. *�ؾ� �Ǵϱ� 1�� ����
	
	for (i = 1; i <= n; i++) // for������ ���ϴ� �� ���� ����.
	{
		result *= i;
	}
	return result; // ��� �� ��ȯ
}

int combianation(int n, int r)
{
	return(factorial(n) / (factorial(r) * factorial(n - r))); //combination���� �Ű����� 2�� ���� �� factorial���� ������ ���� ����.
}

int get_integer() // ������ �Է� �޴� �Լ� ����.
{
	int n;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);
	return n;
}

