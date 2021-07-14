#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,agg;
	float per;
	printf("\n enter the marks");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&agg);
	agg=(m1+m2+m3+m4+m5);
	per=agg/5;
	printf("\n the agg is equal to %d",agg);
		printf("\n the per is equal to %.2f",per);
	
}
