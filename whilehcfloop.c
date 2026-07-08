 //to cal the HCF of a given no.
#include<stdio.h>
void main()
{
	int i=1,min,n1,n2,HCF;
	printf("Enter the value of n1,n2\n");
	scanf("%d%d",&n1,&n2);
	min=(n1<n2)?n1:n2;
	while(i<=min)
	{
		if(n1%i==0&&n2%i==0)
		{
			HCF=i;
		}
		i++;
	}
	printf("Hcf=%d",HCF);
} 
