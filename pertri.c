//to calculate the perimetre of triangle
#include<stdio.h>
void main()
{
	float a,b,c,perimetre;
	printf("Enter the value of a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	perimetre=a+b+c;
	printf("The perimetre of rectangle is %.1f",perimetre);
}
