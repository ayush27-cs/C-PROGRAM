//max element in 1d array
#include<stdio.h>
void main()
{
	int arr[50],i,n,max;
	printf("Enter the size of array");
	scanf("%d",&n);
	
	printf("Enter %d no. of elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("Maximum no of array is %d\n",max);
}
