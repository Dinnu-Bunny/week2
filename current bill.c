#include<stdio.h>
int main()
{
	int a,b,c;
	printf("The number of units a is");
	scanf("%d",&a);
	//sur charge
	b=300;
	//chrge per unit
	c=10;
	if(a>=0)
	printf("total bill %d",b+(c*a));
	return 0;
}
