#include<stdio.h>
int main()
{
	int i,num;
	printf("\n Enter any number");
	scanf("%d",&num);
	i=2;
	while(i<num)
	{
		if(num% i==0)
		{
			printf("%d is not a prime",num);
			break;
		}
		i++;
	}
	if(num==i)
	printf("\n %d is a prime number",num);
}
