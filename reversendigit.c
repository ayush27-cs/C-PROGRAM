//reversing the n digit no.
#include<stdio.h>
void main()
{
	int n,rem,rev;
	printf("Enter the value of n");
	scanf("%d",&n);
	while(n>0)
	{
	rem=n%10;
	rev=(rev*10)+rem;
	n=n/10;
	
	}
	printf("Reversed%d\n",rev);
	
}

