#include<stdio.h>
int main()
{
	int a,b,t;
	printf("\n enter the numbers");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;

	a=a-b;
	printf("\n the interchange of two content%d%d",a,b);
	return 0;
 } 
