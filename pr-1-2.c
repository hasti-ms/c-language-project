#include<stdio.h>
int main()
{
	float bs, HRA, DA, TA;

	printf("enter base salary:");
	scanf("%f",&bs);
	printf("enter HRA:");
	scanf("%f",&HRA);
	printf("enter DA:");
	scanf("%f",&DA);
	printf("enter TA:");
	scanf("%f",&TA);
	float hra = (HRA / 100)*bs;
	float da = (DA / 100)*bs;
	float ta = (TA / 100)*bs;
	float gs = bs+hra+da+ta;
	printf("your gross salary:%.2f",gs);
}