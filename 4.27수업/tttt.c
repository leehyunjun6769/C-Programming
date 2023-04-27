#include <stdio.h>

int add(int a);

int a;
int main()
{
	int a = 10;
	int result;
	printf("main - a : %d\n", a);
	result = add(a);
	printf("main2 - a : %d\n", result);
	return 0;
}

int add(int a)
{
	a = 20;
	printf("add - a : %d\n", a);
	return a;
}