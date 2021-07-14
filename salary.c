#include<stdio.h>
int main()
{
	int Gs,Bs,Hr,Da;
	printf("\n enter the salary");
	scanf("%d",&Bs);
	Da=0.4*Bs;
	Hr=0.2*Bs;
	
	Gs=Bs+Hr+Da;
	printf("\n the basic salary is:%d",Bs);
	printf("\n the gross salary is:%d",Gs);
	printf("\n the home rent is:%d",Hr);
	printf("\n the dear allow is:%d",Da);
	return 0;
}
