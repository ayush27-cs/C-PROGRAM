//to check whether the year is leap year or not
#include<stdio.h>
void main()
{
	int year;
	printf("Enter the value of year\n");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("the year is leap year");
		
	}
	else
	{
		printf("the year is not a leap year");
	}
}
