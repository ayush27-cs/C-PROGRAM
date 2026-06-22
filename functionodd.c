// function
#include<stdio.h>
int isodd(int n)
{
	if(n%2==1)
	return 1;
	else
	return 0;
}
void main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	if(isodd( n))
	printf("%d is odd",n);
	else
	printf("%d is even",n);
}
