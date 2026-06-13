//to find the factorial of a given no.
#include<stdio.h>
void main()
{
	int n,i,f=1;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		f=f*i;
		printf("Factorial=%d\n",f);
		i++;
	}
}
