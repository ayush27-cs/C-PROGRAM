//swapping the variable
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a,b");
	scanf("%d%d",&a,&b);
	printf("Before swapping value of a =%d\n",a);
	printf("Before swapping value of b =%d\n",b);
	//logic for swapping
	c=a;
	a=b;
	b=c;
	printf("after swapping value of a =%d\n",a);
	printf("after swapping value of b =%d\n",b);

}
