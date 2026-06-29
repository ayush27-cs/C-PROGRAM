#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,*ptr;
	printf("enter the number no of element:");
	scanf("%d",&n);
	ptr=malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		
		printf("error in memory allocation");
		exit(0);
	}
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("display the elements of array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*(ptr+i));
	}
	free(ptr);
}
