#include<stdio.h>
int main()
{
	int number, a, b, c, d;
	number = 1103;
	printf("输入的四位数为：%d\n", number);
	a=number / 1000;
	b=(number-a*1000)/100;
	c=(number-a*1000-b*100)/10;
	d = number % 10;
	printf("反序数是:%d%d%d%d\n", d,c,b,a);
	return 0;
}