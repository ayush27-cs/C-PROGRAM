  // print the series of square of odd natural nos 
#include<stdio.h>
void main()
{
	int n,i,square;
	printf("Enter the value of n natural no.");
	scanf("%d",&n);
	printf("Square of odd natural no.\n");
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
		square=i*i;
		printf("%d\t",square);
		}
		
	}	
}






