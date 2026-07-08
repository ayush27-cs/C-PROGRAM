#include<stdio.h>
void arr(int arr[],int n);
void reverse(int arr[],int n);
void printarray(int arr[],int n);
void main()
{
	int arr[]={23,34,35,27,28,30};
	reverse(arr,6);
	printarray(arr,6);
	
}
void printarray(int arr[],int n)
{
	int i;
	for( i=0;i<n;i++){
		printf("%d\t",arr[i]);
		
	}
	
}

void reverse(int arr[],int n)
{
	int i;
	for(i=0;i<n/2;i++){
	int first=arr[i];
	int second=arr[n-i-1];
	arr[i]=second;
	arr[n-i-1]=first;
	}
}
