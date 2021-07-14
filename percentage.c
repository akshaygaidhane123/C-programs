#include<stdio.h>
int main()
{
	float m1,m2,m3,m4,m5,per;
	printf("\n enter the marks");
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5,&per);
	per=(m1+m2+m3+m4+m5)/5;
	if(per>=75)
	printf("\n the grade is A");
	else if(per<75&&per>=60)
	printf("\n the grade is B");
	else if(per<60&& per>=45)
	printf("\n the grade is C");
	else(per<=35);
	printf("\n the student is unsuceess");
}
