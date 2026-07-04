//to check whether a character is vowel or consonant
#include<stdio.h>
void main()
{
	char alphabet;
	printf("Enter the value of alphabet\n");
	scanf("%c",&alphabet);
	if(alphabet=='a','e','i','o','u')
	{
		printf("The alphabet is a vowel");
		
	}
	else
	{
		printf("The alphabet is a consonant");
	}
}
