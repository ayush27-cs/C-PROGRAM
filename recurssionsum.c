#include<stdio.h>
int sum(int n){
	if(n==0)
	return 0;	
	else
	return sum(n-1)+n;
}
void main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Sum of n %d natural no. is= %d\n",n,sum(n));
}
