# 4주차 C언어실습
  - 4주차 복습  
  - 4주차 실습

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    // result를 이용한 사칙연산
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
```
