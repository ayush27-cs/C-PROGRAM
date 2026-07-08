#include<stdio.h>
struct Student{
	char name[100];
	int roll;
	float marks;
};
void main()
{
	struct Student students[5];
	int i,n,maxindex;
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
		if(students[i].marks>students[maxindex].marks)
		maxindex=i;
	
	}
	printf(" Student with Highest Marks:\n");
    printf("Name: %s\n", students[maxindex].name);
    printf("Roll: %d\n", students[maxindex].roll);
    printf("Marks: %.2f\n", students[maxindex].marks);

}
