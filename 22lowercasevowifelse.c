// to check a charactor is a lowercase vowel
#include<stdio.h>
void main()
{
	char alphabet,vowel;
	printf("Enter an alphabet:");
	scanf("%c",&alphabet);
	vowel='a','e','i','o','u';
	if(alphabet>=97 && alphabet<=122 && vowel)
	{
		printf("This is lowercase vowel");
	}
	else 
	{
		printf("Not a lowercase vowel");
	}
}
