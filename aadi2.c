// to check a number is divisible by both 4 and 6
#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	switch(n%12)
	{
		case 1 :
			printf("Number is divisible by both");
			break;
		case 2 :
			printf("Number is not divisible");
	}
}
