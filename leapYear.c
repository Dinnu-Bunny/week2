#include<stdio.h>
int main()
{
	int a;
	printf("The value of a is");
	scanf("%d",&a);
	if((a%4==0&&a%100!=0)||a%400==0)
	printf("a is an leap year");
	else
	printf("a is not an leap year");
	return 0;
	
}
