//max element in 1d array
#include<stdio.h>
void main()
{
	int arr[50],i,n,first,second;
	printf("Enter the size of array");
	scanf("%d",&n);
	
	printf("Enter %d no. of elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	first=second=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>first){
			second=first;
			first=arr[i];
		}
		else if(arr[i]>second&&arr[i]!=first){
			
		}
		else("Second no. %d\n",second);
	}
	printf("Second no of array is %d\n",second);
}
