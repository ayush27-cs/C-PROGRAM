 //to check a given triangl is isoceles,saclene,equilateral
#include<stdio.h>
void main()
{
	float a,b,c,triangle;
	printf("Enter the sides of triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==b&&b==c&&a==c)
	printf("Given triangle is Equilateral triangle");
	else if(a==b||b==c||a==c)
	printf("Given triangle is isoceles triangle");
	else if(a!=b&&b!=c&&a!=c)
	printf("Given triangle is scalene triangle");
	else
	printf("None of the above");
	
}
