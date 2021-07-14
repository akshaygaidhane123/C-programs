#include<stdio.h>
int main()
{
	float km,m,cm,ft,inch;
	printf("\n Enter the distance in km");
	scanf("%f",&km);
	m=km*1000;
	cm=km*1000*100;
	ft=km*3280.84;
	inch=km*39370.08;
	printf("\n the distance in m %f",m);
	printf("\n the distance in cm %f",cm);
	printf("\n the distance in ft %f",ft);
	printf("\n the distance in inch %f",inch);
	
}
