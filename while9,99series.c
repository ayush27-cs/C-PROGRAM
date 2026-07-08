//to calculate the 9,99,999,9999,.....
#include<stdio.h>
void main()
{
	long long int i,n,series=0;
	printf("Enter the value of n");
	scanf("%lld",&n);
	i=1;
	while(i<=n)
	{
		series=(series*10)+9;
		printf("%lld\t",series);
		i++;
	}
}
