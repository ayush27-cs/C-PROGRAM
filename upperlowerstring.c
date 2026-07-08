#include<stdio.h>
#include<string.h>
void printupperlower(char str[]);
int i;
void main()
{
	char str[100];
	fgets(str,sizeof(str),stdin);
	printupperlower(str);
	
}
void printupperlower(char str[])
{
	int i;
	for(i=0;i<strlen(str);i++){
		char ch=str[i];
		if(ch >= 'a' && ch <= 'z')
            printf("Lowercase character: %c\n", ch);
        else if(ch >= 'A' && ch <= 'Z')
            printf("Uppercase character: %c\n", ch);
        else
            printf("Other character: %c\n", ch);
	}
}
