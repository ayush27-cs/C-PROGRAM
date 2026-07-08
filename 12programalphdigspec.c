//to check whether a given character is a alphabet,digit,special character
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character is alphabet\n");
	scanf("%c",&ch);
	if(ch>='a'&& ch<='z'||ch>='A'&& ch<='Z')
	{
		printf("Given character is alphabet");
		
	}
	else if(ch>='0'&& ch<='9')
	{
		printf("Given character is digit");
	}
	else
	{
		printf("Given character is a special character");
	}
}
