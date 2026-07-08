//upper case to lower case
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter any character\n");
	scanf("%c",&ch);
	ch=ch+32;
	printf("lower case %c\n",ch);
}
