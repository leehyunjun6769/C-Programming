#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    double x, y, result;

    printf("두개의 실수를 입력하세요 : ");
    scanf("%lf %lf", &x, &y);

    result = x + y;
    printf("%f + %f = %f\n", x, y, result);

    result = x - y;
    printf("%f - %f = %f\n", x, y, result);


    result = x * y;
    printf("%f * %f = %f\n", x, y, result);  
    
    result = x / y;
    printf("%f / %f = %f\n", x, y, result);

    return 0;
}