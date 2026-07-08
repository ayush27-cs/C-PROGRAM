//to find the smallest among three no. using nested if and else
#include<stdio.h>
void main ()
{
	int a,b,c;
	printf("enter the value  of a,b and c");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
		printf("A is smallest");	
		}
		else
		{
			printf("C is smallest");
		}
		
	}
	else
	{
		if(b<c)
		{
			printf("B is smallest");
			
		}
		else
		{
			printf("C is smallest");
			
		}
	}
 } 
