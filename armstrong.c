//to create a armstrong no.
#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,originalnum,remainder=0,result=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	originalnum=n;
	for(i=1;i<=originalnum;i++)
	{
		remainder=originalnum%10;
		result+=pow(remainder,n);
		originalnum=originalnum/10;
	}
	if(result==n)
	{
		printf("%d",n);
	}
}
