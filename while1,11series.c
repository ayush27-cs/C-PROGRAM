//to calculate the 1,11,111,1111,.....
#include<stdio.h>
void main()
{
	long long int i,n,series=0;
	printf("Enter the value of n");
	scanf("%lld",&n);
	i=1;
	while(i<=n)
	{
		series=(series*10)+1;
		printf("%lld\t",series);
		i++;
	}
}
