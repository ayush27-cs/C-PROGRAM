#include<stdio.h>
#include<string.h>
int countvow(char str[]);
void main()
{
	char str[100];
	fgets(str,sizeof(str),stdin);
	printf("Vowels are %d\n",countvow(str));
}
int countvow(char str[]){
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		char c=str[i];
		 if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
           c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
			count++;
		
	}
	return count;
}
