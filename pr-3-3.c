#include<stdio.h>
int main()
{
	int i, ln, fn, a;
	printf("enter any no.:");
	scanf("%d",&i);
	ln = i % 10;
	fn = i ;
	while(fn >= 10){
		fn = fn / 10;
	}
	a = fn + ln;
	printf("the sum of first and last no.:%d", a);
}
/*
enter any no.:2344
the sum of first and last no.:6
*/