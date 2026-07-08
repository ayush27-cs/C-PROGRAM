// print the FABBOCONI series of  nos 
#include<stdio.h>
void main()
{
	int n,i,a=-1,b=1,sum=0;
	printf("Enter the value of ending of series.");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=a+b;
		printf("%d\t",sum);
		a=b;
		b=sum;
		i++;
	}
}

