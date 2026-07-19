// to check the coordinates are at which quadrant
#include<stdio.h>
void main()
{
	int x,y,point;
	printf("Enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	if(x>0&&y>0)
	point=1;
	else if(x<0&&y>0)
	point=2;
	else if(x<0&&y<0)
	point=3;
	else if(x>0&&y<0)
	point=4;
	switch(point)
	{
		case 1:
			printf("The point lies in 1 quadrant\n");
			break;
		case 2:
			printf("The point lies in 2 quadrant\n");
			break;
		case 3:
			printf("The point lies in 3 quadrant\n");
			break;
		case 4:
			printf("The point lies in 4 quadrant\n");
			break;
		default :
			printf("The point lies on the axis");
	}
}
