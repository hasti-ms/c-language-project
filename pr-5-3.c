#include<stdio.h>
int main()
{
	int s;
	printf("enter the array's row and column size:");
	scanf("%d",&s);
	
	int a[s][s];
	printf("enter array's elements:\n");
	for(int i=0; i<s; i++){
		for(int j=0; j<s; j++){
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
    }
	printf("the transpose matrix of an array:\n");
	for(int i=0; i<s; i++){
		for(int j=0; j<s; j++){
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
}
/*
enter the array's row and column size:3
enter array's elements:
a[0][0]= 1
a[0][1]= 2
a[0][2]= 3
a[1][0]= 4
a[1][1]= 5
a[1][2]= 6
a[2][0]= 7
a[2][1]= 8
a[2][2]= 9
the transpose matrix of an array:
1 4 7
2 5 8
3 6 9
*/