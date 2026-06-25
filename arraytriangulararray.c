//to check upper triangular matrix
#include<stdio.h>
void main()
{
	int r,c,i,j,b=0;
	printf("enter the size of r and c\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the element of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
    printf("Display the elements of matrix\n");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("checking the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i>j&&a[i][j]==0)
			b++;
			else
			b=0;
		}
	}
	if(b>0)
	printf("Matrix is upper triangular matrix\n");
	else
	printf("Not an upper triangular matrix\n");
}
