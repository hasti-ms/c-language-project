#include<stdio.h>
int main()
{
	float a,b,c;
	printf("first angle:");
	scanf("%f", &a);
	printf("second angle:");
	scanf("%f", &b);
	 c = 180-(a+b);
	printf("third angle:%f",c);
}
/*
first angle:45
second angle:65
third angle:70.000000
*/