#include<stdio.h>
int main()
{
	float l,b,ra,ar,pr,ac,cc;
	printf("\n enter the length & breadth\n");
	scanf("%f%f",&l,&b);
	printf("\n enter the radius of circle\n");
	scanf("%f",&ra);
	ar=l*b;
	pr=2*l+b;
	ac=3.14*ra*ra;
	printf("\n enter the area & parameter of rectangle%2f\n%2f\n",ar,pr);
	printf("\n enter area of circumference of circle%2f\n%2f\n",ac,cc);

return 0;
}
