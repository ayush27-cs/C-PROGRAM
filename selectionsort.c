//sorting of string
#include<stdio.h>
void main()
{
	char str[100],temp;
	int len=0,i,j;
	printf("Enter a String :");
	gets(str);
	//for lenght
   while(str[len]!='\0')
    {
   		len++;
	}	
	//sort the string
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(str[i]>str[j])
			{
			   temp=str[i];
			   str[i]=str[j];
			   str[j]=temp;
		    }
		}
	}
	printf("Sorted string=%s",str);
}
