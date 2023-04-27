#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int tmp = 0;
	printf("x= %d y =%d\n", a, b);

	tmp = a;
	a = b;
	b = tmp;

	printf("x= %d y =%d",a, b);


}