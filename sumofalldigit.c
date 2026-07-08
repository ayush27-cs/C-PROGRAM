//to find the sum of all digit of a given n-digit no.
#include<stdio.h>
void main()
{
	int n,sum=0,rem;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("Sum of all given digit%d\n",sum);
	
}

