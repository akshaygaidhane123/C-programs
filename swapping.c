#include<stdio.h>
int main()
{
	int a,b,t;
	printf("\n enterr the two variable");
	scanf("%d%d",&a,&b);
	printf("before the swapping");
	t=a;
	a=b;
	b=a;
	printf("after the swapping ele=%d",a,b);
}
