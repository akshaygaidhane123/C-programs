#include<stdio.h>
int main()
{
	int qty,dis=0;
	float rate,tot;
	printf("enter quantity and rate");
	scanf("%d %f",&qty,&rate);
	if(qty>100)
	dis=10;
	tot=(qty*rate)-(qty*rate*dis/100);
	printf("total expense=Rs%f",tot);
}
