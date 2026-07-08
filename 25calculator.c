//to implement a simple calculator using if-else-if
#include<stdio.h>
void main()
{
	int n1,n2;
	char op;
	printf("Enter the value of n1 and n2 op('+,-,*,/,%')\n");
	scanf("%d%d%c",&n1,&n2,&op);
	if(op=='+')
	{
		printf("Result %d\n",n1+n2);
	}
	else if(op=='-')
	{
		printf("Result %d\n",n1-n2);
		
		
	}
	else if(op=='*')
	{
		printf("Result %d\n",n1*n2);
		
	}
	else if(op=='/')
	{
		if(n2!=0)
		{
			printf("Result %.2f\n",n1/n2);
			
		}
		else
		{
			printf("Division by zero is not possible");
			
		}
	}
	else if(op=='%')
	{
		if(n2!=0)
		{
			printf("Result %.2f\n",n1%n2);
			
		}
		else
		{
			printf("Modulus by zero is not allowed");
			
		}
	}
	else
	{
		printf("Invalid operator");
	}
		
	
	
}
