//to find the maximum  four digit number with the help of nested if-else
#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter the value of a,b,c,d\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is greater ");
				
			}
			else
			{
				printf("D is greater");
			}
		}
	}
	
	else
	
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("B is greater");
				
			}
			else
			{
				printf("D is greater");
			}
		}
	}
	else
	{
		if(c>d)
		{
			printf("C is greater");
			
		}
		else
		{
			printf("D is greater");
		}
	}

	

}

