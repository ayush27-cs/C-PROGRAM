//max element in 1d array
#include<stdio.h>
void main()
{
	int arr[50],i,j,n,unique,count=0;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter %d no. of elements:\n",n);
		for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Unique no. of elements:\n");
	for(i=0;i<n;i++)
	{
		unique=arr[0];
	for(j=0;j<n;j++)
	{
		if(i!=j&&arr[i]==arr[j]){
			unique=0;
			break;
		}
	}
	if(unique){
		printf("%d",arr[i]);
	count++;
	}
}
	printf("\nTotal no. of unique elements are %d\n",count);
}
