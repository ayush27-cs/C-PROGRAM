//to find power of the numbers 
#include<stdio.h> 
void main() 
{
int i,base,power,result=1; 
printf("Enter the base\n"); 
scanf("%d",&base); 
printf("Enter power\n"); 
scanf("%d",&power); 
for(i=1;i<=power;i++) 
	{ 
	result=result*base;
	printf("Answer=%d",result);			
	} 

}
