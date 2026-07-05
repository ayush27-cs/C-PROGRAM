#include<stdio.h>
typedef struct EmployeeSalary{
	char name[100];
	int id;
	float salary;
}es;
void main()
{
	es employees[3];
	int i,n=3;
	float da,hra,net;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the details of employees %d\n",i+1);
		printf("Name:");
		scanf("%s",employees[i].name);
		printf("ID:");
		scanf("%d",&employees[i].id);
		printf("Salary:");
		scanf("%f",&employees[i].salary);
	}
	printf("\nEmployee Net Salary Details\n");
    for(i = 0; i < n; i++) {
        da = 0.40 * employees[i].salary;   
        hra = 0.25 * employees[i].salary;
        net = employees[i].salary + da + hra;

        printf("Name: %s, ID: %d, Salary: %.2f, Net Salary: %.2f\n",
        employees[i].name, employees[i].id, employees[i].salary, net);
    }
}

