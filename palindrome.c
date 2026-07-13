//palindrome number
#include<stdio.h>
void main(){
	int n,original,reverse=0,digit;
	printf("Emnter the value of n:\n");
	scanf("%d",&n);
	original=n;
	while(n>0){
		digit=n%10;
		reverse=(reverse*10)+digit;
		n=n/10;
		
	}
	if(original==reverse)
	printf("The number is palindrome");
	else
	printf("Number is not palindrome");
}
