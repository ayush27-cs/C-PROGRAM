//to swap the no. by XOR method
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the value of a,b");
	scanf("%d%d",&a,&b);
	printf("Before swapping value of a =%d\n",a);
	printf("Before swapping value of b =%d\n",b);
	//logic used to swap the no.
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swapping value of a =%d\n",a);
	printf("After swapping value of b =%d\n",b);

}
