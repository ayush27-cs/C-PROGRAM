// wreite a program to calculate the percentage in class according the grades 
#include<stdio.h>
void main ()
{
	float s1,s2,s3,s4,s5,total ,per;
	printf(" Enter the  marks of five subject of s1,s2,s3,s4, and s5");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	total =s1+s2+s3+s4+s5;
	per= total/5;
	printf("Total marks =%f\n",total);
	printf("per = %f\n",per);
	if (per>=90 && per<=100)
	printf("A+");
	else if  (per>=80 && per<90)
	printf("A");
	else if (per>=70 && per<80)
	printf("B+");
	else if (per>=60 && per<70)
	printf("B");
	else if (per>=50&& per<60)
	printf("C+");
	else if (per>=45&&per<50)
	printf("C");
	else
	printf("D");
}
