//to determine the type of angle
#include<stdio.h>
void main()
{
	int angle,choice;
	printf("Enter the value of angle\n");
	scanf("%d",&angle);
	if(angle<90)
	choice=1;
	else if(angle==90)
	choice=2;
	else if(angle>90&&angle<180)
	choice=3;
	else if(angle==180)
	choice=4;
	switch(choice)
	{
		case 1:
			printf("Acute angle\n");
			break;
		case 2:
			printf("Right angle\n");
			break;
		case 3:
			printf("Obtuse angle\n");
			break;
		case 4:
			printf("straight angle\n");
			break;
		default :
			printf("Error");
	}
	
}
