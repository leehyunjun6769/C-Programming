#include <stdio.h>

int main()
{
	double m, v; // m은 질량, v는 속도
	double j = 0;
	scanf("%lf %lf", &m,&v);

	j = m * (v*v) * 0.5;

	printf("질량(kg): %.lf\n속도(m/s): %.lf\n운동에너지(J): %lf", m, v, j);


}