#include<stdio.h>
#include<math.h>
int main()
{
	double x, y;
	printf("输入x的值：");
	scanf_s("%lf", &x);
	if (x <= 1)
		y = exp(x);
	else
		y = pow(x,2)-1;
	printf("f(%f)=%.2f\n", x, y);
	return 0;


}