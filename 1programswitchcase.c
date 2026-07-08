//switch case to check whether a nu. is divisble by both 4 and 6
#include<stdio.h>
void main()
{
int a;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	switch(a%12)
	{
		case 0:
			printf("The no. is divisble by both 4 and 6 \n");
			break;
		default:
			printf("The no. is not divisble by anyone");
			
	}	
}

	
