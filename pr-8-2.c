#include<stdio.h>
int cube(int *p, int r, int c)
{
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			int v= *(p + i*c + j);
			printf("%d ", v*v*v);
		}
		printf("\n");
	}
}
int main()
{
	int s;
	
	printf("enter array's size:");
	scanf("%d", &s);
	
	int a[s][s];
	
	printf("enter array elements:\n");
	 
	 for(int i=0; i<s; i++){
	 	for(int j=0; j<s; j++){
	 		printf("a[%d][%d] = ", i, j);
	 		scanf("%d", &a[i][j]);
		 }
	 }
	 printf("cubes of all elements:\n");
	 cube((int*)a, s, s);
}
/*
enter array's size:2
enter array elements:
a[0][0] = 1
a[0][1] = 2
a[1][0] = 3
a[1][1] = 4
cubes of all elements:
1 8
27 64
*/