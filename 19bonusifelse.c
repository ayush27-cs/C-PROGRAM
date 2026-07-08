//to calculate employee bonus on salary slabs
#include<stdio.h>
void main()
{
	float salary, bonus;
	printf("Enter your salary :");
	scanf("%f",&salary);
	if(salary>=100000)
	{
		printf("Your bonus is 10000");
	}
	else if(salary<=500000 && salary>=300000)
	{
		printf("Your bonus is 3500");
	}
	else if(salary<=200000 && salary>=100000)
	{
		printf("your bonus is 2500");
	}
	else if(salary<=100000 && salary>=50000)
	{
		printf("your bonus is 1500");
	}
	else
	{
		printf("Your bonus is 500");
	}
}
