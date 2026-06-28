// to classify the person is child teenager , adult or senior citizen
#include<stdio.h>
void main()
{
	int age;
	printf("Enter your age in between (1 to 12),(12 to 18),(18 to 60) and (60 to 85)");
	scanf("%d",&age);
	if(age>=1&&age<=12)
	printf("You are a child");
	else if(age>=12&&age<=18)
	printf("You are a teenager");
	else if(age>=18&&age<=60)
	printf("You are a adult");
	else if(age>=60&&age<=85)
	printf("You are a senior citizen");
}
