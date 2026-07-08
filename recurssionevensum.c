#include<stdio.h>
int sumeven(int n)
{
	if(n==0)
	return 0;
	else
	return 2*n+sumeven(n-1);
	
	
}
void main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Sum of %d even natural no. is %d\n",n,sumeven(n));
}
