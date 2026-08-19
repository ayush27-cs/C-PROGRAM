#include<stdio.h>
void main(){
	int n,i,j;
	int count=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int h[50],g[50];
	
	for(i=0;i<n;i++){
		scanf("%d%d",&h[i],&g[i]);
		}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j&&h[i]==g[j]){
				count++;
			}
		}
	}
	printf("%d\n",count);
	}

