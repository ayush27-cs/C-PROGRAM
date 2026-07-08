#include<stdio.h>
int sum(int n){
	return (n*(n+1))/2;
}
void main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Sum of n %d natural no. is= %d\n",n,sum(n));
}
