//recursion function
#include<stdio.h>
int fact(int n)
{
	if(n==0)
	  return 1;
	else
	  return n*fact(n-1);
}
void main()
{
	int n;
	printf("Enetr the value of n");
	scanf("%d",&n);
	printf("Factorial=%d",fact(n));   
}
