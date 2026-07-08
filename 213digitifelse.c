// to check a number is 3 digit or not
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num>99 && num<1000)
	{
		printf("This  is three digit number");
	}
	else
	{
		printf("Not a three digit number");
	}
}
