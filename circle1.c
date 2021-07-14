#include<stdio.h>
int main()
{
	int rad;
	float PI=3.14,area,ci;
	printf("\n enter the radius of circle");
	scanf("%d",&rad);
	area=PI*rad*rad;
	printf("\n area of circle :%f",&area);
	ci=2*PI*rad;
	printf("\n circumference of circle :%f",&ci);
	return 0;
}