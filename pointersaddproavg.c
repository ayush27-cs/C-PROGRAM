//pointers add,product and average
#include<stdio.h>
void maths(int a,int b,int *sum,int *prod,int *avg);
void main()
{
	int a=25;
	int b=2;
	int sum,prod,avg;
	maths(a, b,&sum,&prod,&avg);
	printf("sum=%d,prod=%d,avg=%d\n",sum,prod,avg);
}
void maths(int a,int b,int *sum,int *prod,int*avg)
{
	*sum=a+b;
	*prod=a*b;
	avg=(a+b)/2;
}
