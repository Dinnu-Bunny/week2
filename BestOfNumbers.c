#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values of a,b and c");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	printf("%d",a);
	else if((b>c)&&(b>a))
	printf("%d",b);
	else if((c>a)&&(c>b))
	printf("%d",c);
	else if((a==b)&&(a>c))
	printf("%d",a);
	else if((a==b)&&(a<c))
	printf("%d",c);
    else if((b==c)&&(b>a))
	printf("%d",b);
	else if((b==c)&&(b<a))
	printf("%d",a);
    else if((c==a)&&(c>b))
	printf("%d",c);
	else if((c==a)&&(c<b))
	printf("%d",b);
    else if(a==b==c)
	printf("%d",a);
	return 0;
}
