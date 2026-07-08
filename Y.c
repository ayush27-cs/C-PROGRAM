//to create U with *
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=3;j++){
		if(i==1||i==3){
			printf("* ");
		}
		else if(i==j){
			printf("* ");
		}
		else{
		    printf("  ");	
		}	
		}
		printf("\n");
	}
}
