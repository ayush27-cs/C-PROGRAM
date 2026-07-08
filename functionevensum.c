#include<stdio.h>
int sumeven(int n)
{
	return n*(n+1);
}
void main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Sum of %d even natural no. is %d\n",n,sumeven(n));
}
