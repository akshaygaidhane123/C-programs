#include<stdio.h>
int main()
{
	float m1,m2,m3,m4,m5,avr;
	printf("\n enter the marks");
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5,&avr);
	avr=(m1+m2+m3+m4+m5)/5;
	printf("\n the avr is=%f:",&avr);
	return 0;
}
