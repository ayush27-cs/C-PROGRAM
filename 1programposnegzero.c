//to check whether a given no. is positive,negative or zero
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	if(num>0)
	{
		printf("the number is positive");
	}
	else if(num<0)
	{
		printf("the number is negative");
		
	}
	else
	{
		printf("the number is zero");
	}
	
}
