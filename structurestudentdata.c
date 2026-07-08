#include<stdio.h>
struct Student{
	char name[100];
	int roll;
	float marks;
};
void main()
{
	struct Student students[5];
	int i,n;
	for(i=0;i<3;i++)
	{
		printf("\nEnter the details of students %d\n",i+1);
		printf("Name:");
		scanf("%s",students[i].name);
		printf("ROll:");
		scanf("%d",&students[i].roll);
		printf("Marks:");
		scanf("%f",&students[i].marks);
	}for(i=0;i<3;i++){
	
	printf("Name:%s,Roll:%d,Marks:%.2f \n",students[i].name,students[i].roll,students[i].marks);
	}
}
