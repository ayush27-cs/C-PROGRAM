// to check whether the triangle three sides can form a triangle
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a,b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	switch(a<b+c&&a+b>c&&a+c>b)
	{
		case 1:
			printf("Triangle is valid");
			break;
		default :
			printf("Error");
	}
}
