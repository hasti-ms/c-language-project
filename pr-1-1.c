#include<stdio.h>
int main()
{
	float c;
	printf("enter temperature in celsius:");
	scanf("%f",&c);
	float f=(c * 9/5)+32;
	printf("the temperature in fahrenheit:%.2f",f);
}
/*
enter temperature in celsius:38
the temperature in fahrenheit:100.40
*/