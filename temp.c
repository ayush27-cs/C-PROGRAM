//to convert the temp F into C
#include<stdio.h>
void main()
{
	float F,C;
	printf("Enter the value of F\n ");
	scanf("%f",&F);
	C=5.0/9.0*(F-32);
	printf("The temp in C %f",C);
}
