#include<stdio.h>
typedef struct Cricketerstats{
	char name[100];
	int matches ;
	int runs;
	float average;
}cs;
void main()
{
	cs cricketers[3];
	int i,n,maxavg=0;
	for(i=0;i<3;i++)
	{
		printf("\nEnter the details of cricketers %d\n",i+1);
		printf("Name:");
		scanf("%s",cricketers[i].name);
		printf("Matches:");
		scanf("%d",&cricketers[i].matches);
		printf("Runs:");
		scanf("%d",&cricketers[i].runs);
		printf("Average:");
		scanf("%f",&cricketers[i].average);
	}for(i=0;i<3;i++){
		if(cricketers[i].average>cricketers[maxavg].average)
		maxavg=i;
}
    printf(" Cricketer with Highest Average:\n");
    printf("Name: %s\n", cricketers[maxavg].name);
    printf("Matches: %d\n", cricketers[maxavg].matches);
    printf("Runs: %d\n", cricketers[maxavg].runs);
    printf("Average: %f\n",cricketers[maxavg].average);
	}
