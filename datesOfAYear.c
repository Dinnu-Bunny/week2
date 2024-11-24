#include<stdio.h>
int main()
{
	int d,m,y;
	printf("The vlues of d,m,y are");
	scanf("%d%d%d",&d,&m,&y);
	if(d==31&&m==12)
	printf("d=1,m=1,y==y+1");
	else if(d==31&&m==1||3||5||7||8||10)
	printf("d=1,m==m+1,y");
	else if(d==30&&m==4||6||9||11)
	printf("d=1,m==m+1,y");
	else if(d==28&&m==2&&((y%4==0&&y%100!=0)||y%400==0))
	printf("d=29,m=2,y");
	else if(d==29&&m==2&&((y%4==0&&y%100!=0)||y%400==0))
	printf("d=1,m=3,y");
	else if(d==28&&m==2&&!((y%4==0&&y%100!=0)||y%400==0))
	printf("d=1,m=3,y");
	else if(d>=30&&m==2&&((y%4==0&&y%100!=0)||y%400==0))
	printf("invalid");
	else if(d>=29,m==2,!((y%4==0&&y%100!=0)||y%400==0))
	printf("invalid");
	else if(d>=31&&m==4||6||9||11)
	printf("invalid");
	else if(d>=32&&m==1||3||5||7||8||10)
	printf("invalid");
	else if(m>13)
	printf("invalid");
	return 0;
	
}
