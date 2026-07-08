//strings
#include<stdio.h>
int i;
int printstring(char arr[]);
void main()
{
	char firstname[]="Ayush";
	char middlename[]="Singh";
	char lastname[]="Thakur";
	printstring(firstname);
	printstring(middlename);
	printstring(lastname);
}
int printstring(char arr[])
{
	for(i=0;arr[i]!='\0';i++){
		printf("%c",arr[i]);
		}
	
}
