#include<stdio.h>
int main()
 {
 	char str[100];
 	int i, j, l=0, p=1, c;
 	
 	printf("enter any string:");
 	scanf("%s", &str);
 	
 	while(str[l] != NULL ){
 		l++;
	 }
	 
	 for(int i=0; i<l/2; i++){
	 	if(str[i] != str[l-i-1]){
	 		p=0;
		 }
	 }
	 
	 if(p){
	 	printf("The given string is a palindrome.");
	 }else{
	 	printf("The given string is not a palindrome.");
	 }
	  
	printf("\nfrequency of each letter:\n");
	
	for(int i=0; i<l; i++){
	    c=1;
	    int ac=0;
	    for(int k=0; k<i; k++){
	    	if(str[i] == str[k]){
	    		ac=1;
	    	
			}
		}
		if (ac){
			continue;
	    }
	    for(int j=i+1; j<l; j++){
				if(str[i] == str[j]){
	    		c++;
			}
	    }
	    printf("%c = %d\n", str[i], c);
	}
}
 
 /* 
 enter any string:level
The given string is a palindrome.
frequency of each letter:
l = 2
e = 2
v = 1
 */