//to determine a student gets a scholorship based on marks and attendance
#include<stdio.h>
void main()
{
	int marks , attendance;
	printf("Enter your marks");
	scanf("%d",&marks);
	printf("Enter your attandence");
	scanf("%d",&attendance);
	switch(marks>=80&&attendance>=75)
	{
		case 1 :
			printf("You will get the schlorship");
			break;
		case 0 :
			printf("Not eligible for schlorship");
			break;
		default :
			printf("Error");
	}
}
