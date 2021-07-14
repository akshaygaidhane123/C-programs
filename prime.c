#include<stdio.h>
int main()
{
	int i,num;
	printf("\n enter any number");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num% i==0)
		{
			printf("\n %d is a not prime",num);
			break;
		}
	}
	if(num==i)
	printf("\n %d is a prime number",num);
}
