#include<stdio.h>
int main()
{
	int i, n=0;
	printf("enter any no.:");
	scanf("%d",&i);
	if(i == 0){
		n == 1;
	}else{
		if(i < 0) n = -n; 
		
			while(i != 0){
				i = i/ 10;
				n++;
			}
	}
	printf("total no. of digits:%d",n);
}
/*
enter any no.:23445
total no. of digits:5
*/