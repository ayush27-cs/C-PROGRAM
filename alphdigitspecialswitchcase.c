//to check thet the given charactor is alphabet , digit or special charactor 
#include<stdio.h> 
void main() 
{ 

char ch; 
printf("Enter a charactor: "); 
scanf("%c",&ch); 
if(ch>='a' && ch<='z' || ch>='A' && ch<='Z') 
{
	printf("given charactor is alphabet"); 
}
else if(ch>='0'&&ch<='9') 
{
	printf("given charactor is digit"); 
}
else 
{
	printf("Given character is special character");
 } 
}
