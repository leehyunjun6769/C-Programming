#include <stdio.h>

int inc(int counter);

int main()
{
	int i;

	i = 10;
	printf("�Լ� ȣ�� �� i = %d\n", i);

	
	printf("�Լ� ȣ�� �� i = %d\n", inc(i));
	return 0;
}

int inc(int counter)
{
	counter++;


}