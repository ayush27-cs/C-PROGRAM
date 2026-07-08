//to calculate electricity bill according to unit consumed
#include<stdio.h>
void main()
{
	float a,bill;
	printf("Enter the value of a\n");
	scanf("%f",&a);
	bill=10*a;
	printf("The electricity bill is %.2f\n",bill);
}
