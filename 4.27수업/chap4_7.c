#include <stdio.h>

int main()
{
	double m, v; // m�� ����, v�� �ӵ�
	double j = 0;
	scanf("%lf %lf", &m,&v);

	j = m * (v*v) * 0.5;

	printf("����(kg): %.lf\n�ӵ�(m/s): %.lf\n�������(J): %lf", m, v, j);


}