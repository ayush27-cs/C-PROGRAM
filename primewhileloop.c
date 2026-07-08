//to cal the prime of a given no.
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			count++;
		}
		i++;
	}
	if(count==2)
	printf("No is prime");
	else
	printf("No is not prime");
}
