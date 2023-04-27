#include <stdio.h>

int main()
{
	int i = 0;

	printf("%d\n", i++); // 후위 연산자
	printf("%d", ++i);
	printf("%d", i);

	// ++i = i = i+1;
	// i++ = i = i + 1;
	// i = 0;
	// ++i = i = i+1;
	// i++ = i, 
	// i = i + 1;

}