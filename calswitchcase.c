// to built  calculator using switch case
#include<stdio.h>
void main()
{
	char choice;
	float a,b;
	printf("Enter a choice  :");
	scanf("%c",&choice);
	switch(choice)
	{
		case '+' :
			printf("enter the value of a and b");
			scanf("%f%f",&a,&b);
			printf("sum= %f\n",a+b);
			break;
		case '-' :
			printf("enter the value of a and b");
			scanf("%f%f",&a,&b);
			printf("sub= %f\n",a-b);
			break;
		case '*' :
			printf("enter the value of a and b");
			scanf("%f%f",&a,&b);
			printf("multi= %f\n",a*b);
			break;
		case '/' :
			printf("enter the value of a and b");
			scanf("%f%f",&a,&b);
			printf("div= %f\n",a/b);
			break;
		default :
		    printf("Invalid choice");
	}
}
