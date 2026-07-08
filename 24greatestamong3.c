// compare 3 numbers by nested if else 
#include<stdio.h> 
void main() 
{ 
int a,b,c; 
printf("enter the value of a ,b ,c"); 
scanf("%d%d%d",&a,&b,&c); 
if(a>b) 
{ 
if(a>c) 
{ 
   printf("A is greater"); 
  } 
  else 
  { 
   printf("C is greater"); 
  } 
 } 
 else 
 { 
  if(b>c) 
  { 
   printf("B is greater"); 
  } 
  else 
  printf("C is greater"); 
    } 
} 
 

