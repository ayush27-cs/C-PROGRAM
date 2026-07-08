//to display number of days in month  
#include<stdio.h> 
void main() 
{ 
 int choice; 
 printf("Enter a choice between 1 to 12:"); 
 scanf("%d",&choice); 
 switch(choice) 
 { 
  case 1 : 
         printf("January=31days\n"); 
         break; 
     case 2: 
         printf("February=28/29 days\n"); 
         break; 
  case 3: 
         printf("March=31days\n");  
         break; 
  case 4: 
         printf("April=30days\n");  
         break; 
  case 5: 
         printf("May=31days\n");  
         break; 
  case 6: 
         printf("June=30days\n"); 
      break;  
  case 7: 
         printf("July=31days\n"); 
      break; 
  case 8: 
         printf("August=31days\n"); 
      break; 
  case 9: 
         printf("September=30days\n"); 
      break; 
  case 10: 
         printf("Octomber=31days\n"); 
      break; 
  case 11: 
         printf("November=30days\n"); 
      break; 
  case 12: 
         printf("December=31days\n"); 
      break; 
  default : 
         printf("Invalid choice");  
 } 
} 

