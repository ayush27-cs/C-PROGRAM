//to cal the middle no
#include<stdio.h>
void main()
{
	int a,b,c,middle;
	printf("Enter the value of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b&&a>c)||(a<b&&a>c))
	middle=1;
	else if((b>a&&b<c)||(a>b&&b>c))
	middle=2;
	switch(middle)
	{
		case 1:
			printf("A is middle no\n");
			break;
		case 2:
			printf("B is middle no\n");
			break;
		default :
			printf("C is middle no\n");
	}
}
