//to calculate the insurance policy
#include<stdio.h>
void main()
{
	int age,choice;
	printf("Enter the value of age");
	scanf("%d",&age);
	if(age<25)
	{
		choice=1;
	}
	else if(age>=25&&age<50)
	{
		choice=2;
	}
	else
	{
		choice=3;
	}
	switch(choice)
	{
		case 1:
			printf("High premium policy");
			break;
		case 2:
			printf("Medium premium policy");
			break;
		case 3:
			printf("Low premium policy");
		default :
			printf("Error");
	}
}
