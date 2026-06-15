//to check whether a triangle is valid based on its three angles
#include<stdio.h>
void main()
{
	int a,b,c,sum;
	printf("Enter the value of angle\n");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c==180;
	if(sum)
	{
		printf("Triangle is valid");
		
	}
	else
	{
		printf("Triangle is not valid");
	}
}
