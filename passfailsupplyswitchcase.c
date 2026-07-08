//to determine the performance of student
#include<stdio.h>
void main()
{
	int marks,choice;
	printf("Enter the value of marks\n");
	scanf("%d",&marks);
	if(marks>33)
	choice=1;
	else if(marks>25&&marks<33)
	choice=2;
	switch(choice)
	{
		case 1:
			printf("Pass\n");
			break;
		case 2:
			printf("supply\n");
			break;
		default:
		printf("Fail\n");
		
		
	}
		
	
}
