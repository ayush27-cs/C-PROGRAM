//to calculate the perimetre of rectangle
#include<stdio.h>
void main()
{
	float l,b,perimetre;
	printf("Enter the value of l,b\n");
	scanf("%f%f",&l,&b);
	perimetre=2*(l+b);
	printf("The perimetre of rectangle is %.1f",perimetre);
}
