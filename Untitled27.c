//convert a distance from km to mm
#include<stdio.h>
void main()
{
	float km,mm,distance;
	printf("Convert the distance from km to mm");
	scanf("%f%f",&km,&mm);
	distance=mm=km*100000;
	printf("distance in mm =%f",mm);
}
