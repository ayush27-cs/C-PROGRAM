//to check whether if a person is eligible for loan
#include<stdio.h>
void main()
{
	int cs,si,age,FOIR;
	printf("Enter the value cs,si,age,FOIR ");
	scanf("%d%d%d%d",&cs,&si,&age,&FOIR);
	if(cs>=700&&si>=50000&&age>=23&&FOIR<=40)
	{
		printf("Eligible for loan");
	}
	else
	{
		printf("Not eligible for loan");
	}
	
}
