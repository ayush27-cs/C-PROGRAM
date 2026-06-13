 //to cal the HCF of a given no.
#include<stdio.h>
void main()
{
	int i,min,n1,n2,HCF;
	printf("Enter the value of n1,n2\n");
	scanf("%d%d",&n1,&n2);
	min=(n1<n2)?n1:n2;
	for(i=1;i<=min;i++)
	{
		if(n1%i==0&&n2%i==0)
		{
			HCF=i;
		}
	}
	printf("Hcf=%d",HCF);
} 
