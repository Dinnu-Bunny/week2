#include<stdio.h>
int main()
{
	int a,m1,m2,m3,m4,m5;
	printf("The value of m1,m2,m3,m4,m5 is");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	a=(m1+m2+m3+m4+m5)/5;
	if(a>=90&&a<=100)
	printf("A grade");
	else if(a>=80&&a<89)
	printf("B grade");
	else if(a>=70&&a<79)
	printf("C grade");
	else if(a>=60&&a<69)
	printf("D grade");
	else if(a>=40&&a<59)
	printf("E grade");
	else if(a<40)
	printf("F grade");
	return 0;
}
