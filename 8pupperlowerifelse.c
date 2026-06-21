//to check whether a character is uppercase or lowercase
#include<stdio.h>
void main()
{
	char alphabet;
	printf("Enter the value of alphabet\n");
	scanf("%c",&alphabet);
	if(alphabet>=65 && alphabet<=90)
	{
		printf("The alphabet is at uppercase");
		
	}
	else
	{
		printf("The alphabet is at lowercase");
	}
}
