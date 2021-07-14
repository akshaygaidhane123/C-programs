#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("\n enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	f=f*i;
	printf("\n factorial is %d=%d",n,f);
}
