#include <stdio.h>

int main()
{
	float radius; 
	float area;

	printf("반지름을 입력하시오 : ");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;

	printf("%f", area);

	return 0;
}