//strings
#include<stdio.h>
#include<string.h>
int i,n;
int printstring(char arr[]);
void main()
{
	char name[200];
	fgets(name,n);
	puts(name);
}
int printstring(char arr[])
{
	for(i=0;arr[i]!='\0';i++){
		printf("%c",arr[i]);
		}
	
}
