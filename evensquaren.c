  // print the series of square of even natural nos 
#include<stdio.h>
void main()
{
	int n,i,square;
	printf("Enter the value of n natural no.");
	scanf("%d",&n);
	printf("Square of even natural no.\n");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		square=i*i;
		printf("%d\t",square);
		}
		
	}	
}






