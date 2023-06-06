#include <stdio.h>

int inc(int counter);

int main()
{
	int i;

	i = 10;
	printf("함수 호출 전 i = %d\n", i);

	
	printf("함수 호출 후 i = %d\n", inc(i));
	return 0;
}

int inc(int counter)
{
	counter++;


}