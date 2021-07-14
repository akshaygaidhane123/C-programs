#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,sum,num;
	printf("\n enter the numbers");
	scanf("%d",num);
	e=num%10;
	d=(num/10)%10;
	c=(num/100)%10;
	b=(num/1000)%10;
	a=(num/10000);
	
	sum=a+b+c+d+e;
	
	printf("\n num is equal to:%d",sum);
	getch();
	return 0;
}
