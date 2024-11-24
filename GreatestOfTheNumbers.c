#include<stdio.h>
int main()
{
	int a,b,c;
	printf("The values of a,b and c are");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("a is greater than all three numbers");
	if(b>a&&b>c)
	printf("b is greater than all three numbers");
	if(c>a&&c>b)
	printf("c is greater than all three numbers");
	return 0;
	
}
