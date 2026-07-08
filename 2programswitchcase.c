//switch case to check whether a nu. is divisble by 2 but not by 5
#include<stdio.h>
void main()
{
int a;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	switch(a%2==0&&a%5!=0)
	{
		case 1:
			printf("The no. is divisble by 2 but not by 5 \n");
			break;
		case 0:
			printf("The no. is not divisble by anyone");
			break;
		default :
			printf("Error");
			
	}	
}

