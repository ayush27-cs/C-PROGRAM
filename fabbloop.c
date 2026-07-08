  // print the FABBOCONI series of  nos 
#include<stdio.h>
void main()
{
	int n,i,a=-1,b=1,sum;
	printf("Enter the value of ending of series.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=a+b;
		printf("%d\t",sum);
		a=b;
		b=sum;
	}
	
	
}






