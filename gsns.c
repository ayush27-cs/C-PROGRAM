//to calculate the gross sale and net sale
#include<stdio.h>
void main()
{
	float bs,ta,pf,da,gs,ns;
	printf("Enter the value of bs");
	scanf("%f",&bs);
	ta=(10*bs)/100;
	pf=(7.8*bs)/100;
	da=(5*bs)/100;
	gs=bs+ta+da;
	ns=gs-pf;
	printf("The value of gs is: %f\n",gs);
	printf("The value of ns is: %f\n",ns);
	
	
}
