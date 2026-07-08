//to check a given no. is perfect no. or not
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0 && i==n)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		
		printf("It is a perfect no.%d",n);
	}
	else
	{
		printf("Not a perfect no.%d",n);
	}
}
