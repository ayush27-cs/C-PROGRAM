//recurssion function
#include<stdio.h>
int iseven(int n)
{
	if(n==0)
	return 1;
	else if(n==1)
	return 0;
	else
	return iseven(n-2);
}
void main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	if(iseven( n))
	printf("%d is even",n);
	else
	printf("%d is odd",n);
}
