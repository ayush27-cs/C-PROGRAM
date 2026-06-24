//pointers
#include<stdio.h>
void main()
{
	int i;
	int *ptr;
	ptr=&i;
	*ptr=0;
	printf("i =%d\n",i);
	printf("*ptr=%d\n",*ptr);
	
	*ptr+=5;
	printf("i =%d\n",i);
	printf("*ptr=%d\n",*ptr);
	
	(*ptr)++;
	printf("i =%d\n",i);
	printf("*ptr=%d\n",*ptr);
	
}
