//WAP to calculate the sum of first and last digit of the given 4 digit no.
#include<stdio.h>
void main()
{
	int n,d1,d4,sum;
	printf("enter a number");
	scanf("%d",&n);
	d1=n/1000;
	d4=n%10;
	sum=d1+d4;
	printf("Sum of first and last digit is : %d ",sum);
}
