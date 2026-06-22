// recurssion function
#include<stdio.h>
int isodd(int n)
{
	if(n==1)
	return 1;
	else if(n==0)
	return 0;
	else
	return isodd(n-2);
}
void main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	if(isodd(n))
	printf("%d is odd",n);
	else
	printf("%d is even",n);
}
