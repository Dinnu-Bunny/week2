#include<stdio.h>
int main()
{
	float a,b,c;
	printf("The basic salary of an employe a is");
	scanf("%f",&a);
	printf("\n%f", a);
	//da
	b=(15/100.0)*a;
	printf("\n%f", b);
	//hra
	c=(50/100.0)*a;
	printf("\n%f", c);
	float t = a+b+c;
	printf("\n%f",t);
	return 0;
}
