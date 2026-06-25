//to check whether the number is multiply of 3 and 7
#include<stdio.h>
void main()
{
	int a;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	if(a%3==0 && a%7==0)
	{
		printf("The no. is multiply of both");
		
	}
	else
	{
		printf("The no. is not multiply of anyone");
	}
}
