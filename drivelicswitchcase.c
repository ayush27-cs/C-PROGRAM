//to check a person is eligible for driving license 
#include<stdio.h> 
void main() 
{ 
 int age; 
 printf("Enter your age :"); 
 scanf("%d",&age); 
 switch(age>=18) 
 { 
  case 1 : 
   printf("Your are eligible"); 
   break; 
  case 0 : 
   printf("Not eligible"); 
 } 
} 
 

