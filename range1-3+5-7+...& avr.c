#include<stdio.h>
int main()
{
	int n,i,t,sum=0;
	printf("\n Enter the range");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ 
	 t=(2*i-1);
	 if(i%2==0)
	 {
	 
		printf("%d +",(-t));
		sum=sum+ (-t);
	}
	else
	printf("%d",t);
	sum=sum+t;
}
	printf("\n sum of average is=%d",sum);
}
