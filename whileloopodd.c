// print the series of even natural nos 
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the value of odd natural no.");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d\t",i);
		}
		i++;
	}
	
	
}

