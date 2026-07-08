//to check whether the number is divisble by 5 and 11
#include<stdio.h>
void main()
{
	int a;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
		printf("The no. is divisble by both");
		
	}
	else
	{
		printf("The no. is not divisble by anyone");
	}
}
