#include<stdio.h>
int main()
{
	char str[100];
	int i, l=0, p=1;
	
	printf("enter any string:");
	scanf("%s", &str[i]);
	
	while(str[l] != NULL){
		l++;
	}
	for(i=0; i<l/2; i++){
		if(str[i] != str[l-i-1]){
			p=0;
		}
	}
	if(p){
		printf("the given string is a palindrome.");
	}else{
		printf("the given string is not a palindrome.");
	}
}
/*
enter any string:level
the given string is a palindrome.

enter any string:truth
the given string is not a palindrome.
*/
