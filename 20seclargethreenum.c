//to find the second largest among 3 numbers by nested if else
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a ,b ,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a<c)
		{
			printf("A is second largest");
		}
		else
		{
			printf("C is second largest");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is second largest");
		}
		else
		{
			printf("C is second largest");
		}
		
    }
}
