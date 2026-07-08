//to cal the factors of a given no.
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("Factors of given no.%d\n",i);
		}
		i++;
	}
}
