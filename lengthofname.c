//length
#include<stdio.h>

int printname(char arr[]);
int countlength(char arr[]);
void main()
{
	int i,count;
	char name[100];
	fgets(name,sizeof(name),stdin);
	printf("Length is :%d",countlength(name));
}

int countlength(char arr[]){
	
	int count=0,i;
	for(i=0;arr[i]!='\0';i++)
	{
		count++;
	}
	return count-1;
}
int printname(char arr[])
{
	int i;
	for(i=0;arr[i]!='\0';i++)
	{
		printf("%c",arr[i]);
	}
	
}

