  // print the series of square of n natural nos 
#include<stdio.h>
void main()
{
	int n,i,square;
	printf("Enter the value of n natural no.");
	scanf("%d",&n);
	printf("Square of n natural no.\n");
	for(i=1;i<=n;i++)
	{
		square=i*i;
		printf("%d\t",square);
	}	
}






