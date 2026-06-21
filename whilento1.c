// loop program : print counting of natural nos from n to 1
#include<stdio.h>
void main()
{
	int n,i;
	printf("enter the ending of series");
	scanf("%d",&n);
	i=n;
    while(i>=1)
	{
		printf("%d\t",i);
		i--;
		
	}
}
