//swapping using without using 3 variable
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a,b");
	scanf("%d%d",&a,&b);
	printf("Before swapping value of a =%d\n",a);
	printf("Before swapping value of b =%d\n",b);
	//logic for swapping
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping value of a =%d\n",a);
	printf("after swapping value of b =%d\n",b);

}
