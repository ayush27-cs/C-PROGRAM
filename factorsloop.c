//to cal the factors of a given no.
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("Factors of given no.%d\n",i);
		}
	}
}
