//to check eligibility to vote
#include<stdio.h>
void main()
{
	int a;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("Person can vote");
		
	}
	else
	{
		printf("Can't vote");
	}
}
