#include<stdio.h>
typedef struct BookLibraryManagement{
	char name[100];
	char author[100];
	int prize;
}blm;
void main()
{
	blm books[3];
	int i,n,minindex=0;
	for(i=0;i<3;i++)
	{
		printf("\nEnter the details of books %d\n",i+1);
		printf("Name:");
		scanf("%s",books[i].name);
		printf("Author:");
		scanf("%s",books[i].author);
		printf("Prize:");
		scanf("%d",&books[i].prize);
	}for(i=0;i<3;i++){
		if(books[i].prize<books[minindex].prize)
		minindex=i;
	
	}
	printf("Books  with Lowest Prize:\n");
    printf("Name: %s\n", books[minindex].name);
    printf("Author: %s\n", books[minindex].author);
    printf("Prize: %d\n", books[minindex].prize);

}
