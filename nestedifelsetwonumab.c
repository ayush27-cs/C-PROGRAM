//nested if else
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	if(a==b)
	{
		printf("both are equal");
	}
	else
	{
		if(a>b)
		{
			printf("a is greater");
			
		}
		else
		{
			printf("b is greater");
		}
	}
}
