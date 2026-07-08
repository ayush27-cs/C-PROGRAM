//to find the greater btw 3 no.
#include<stdio.h>
void main()
{
	int a,b,c,choice;
	printf("Enter the value of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	choice=1;
	else if(b>a&&b>c)
	choice=2;
	switch(choice)
	{
		case 1:
			printf("A is greater ");
			break;
		case 2:
			printf("B is greater ");
			break;
		default:
			printf("C is greater ");
	}
}
