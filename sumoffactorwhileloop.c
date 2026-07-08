//to cal the factors of a given no.
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
	    sum=sum+i;
	    i++;
	}
	printf("Sum%d\n",sum);
}
