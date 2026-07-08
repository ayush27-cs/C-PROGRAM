  // print the series of even natural nos 
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the value of even natural no.");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
		i++;
	}	
}






