//to find power of the numbers 
#include<stdio.h> 
void main() 
{
int i,base,power,result=1; 
printf("Enter the base\n"); 
scanf("%d",&base); 
printf("Enter power\n"); 
scanf("%d",&power); 
i=1;
while(i<=power)
	{ 
	result=result*base;	
	printf("Answer=%d",result);
	i++;		
	}
	

}
