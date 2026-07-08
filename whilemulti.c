// print the multiplication table of a given nos 
#include<stdio.h>
void main()
{
	int n,i=1;
	printf("Enter the value of no.");
	scanf("%d",&n);
	printf("Multiplication table of %d\n",n);
	while(i<=10)
	{
		printf("%d*%d=%d\n",n,i,n*i);
		i++;
	}	
}


