#include<stdio.h>
int main()
{
	int s, i;
	printf("enter the array size:");
	scanf ("%d", &s);
	
	int a[s];
	for(int i=0; i<s; i++){
	    printf("enter no.:");
	    scanf("%d", &a[i]);
	}
	printf("negative elements for an array:");
	for(int i=0; i<s; i++){
		if(a[i]<0){
        printf("%d, ", a[i]);
		}

	}
	printf("\n");
}
/*
enter the array size:5
enter no.:2
enter no.:-4
enter no.:1
enter no.:-3
enter no.:-5
negative elements for an array:-4, -3, -5,
*/