#include<stdio.h>
int len(char *p)
{
	int l=0;
	while(*p != '\0'){
		l++;
		*p++;
	}
	return l;
}
int main()
{
	char a[100];
		
	printf("enter any string:");
	gets(a);
	
	for(int i=0; a[i] != '\0'; i++){
		if(a[i] == '\0'){
			a[i] = 0;
		}
	}
	printf("the length of the string is :%d", len(a));
	
}
/*
enter any string:hello world
the length of the string is :11
*/