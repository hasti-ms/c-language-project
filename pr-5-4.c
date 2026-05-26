#include<stdio.h>
int main()
{
	int r, c, rn, cn;
	printf("enter the array's row size:");
	scanf("%d", &r);
    printf("enter the array's column size:");
	scanf("%d", &c);	
	
	int a[r][c];
	printf("enter array's elements:\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("a[%d][%d]=", i,j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("enter row number:");
	scanf("%d",&rn);
	
	int rsum=0;
	printf("elements of row %d:", rn);
	for(int j=0; j<c; j++){
		printf("%d, ", a[rn][j]);
		rsum += a[rn][j];
	}
	printf("\nthe sum of a row %d: %d", rn,rsum);
	
	printf("\nenter column number:");
	scanf("%d",&cn);
	
	int csum=0;
	printf("elements of column %d:", cn);
	for(int i=0; i<r; i++){
		printf("%d, ", a[i][cn]);
		csum += a[i][cn];
	}
	printf("\nthe sum of a column %d: %d", cn,csum);
}
/*
enter the array's row size:3
enter the array's column size:3
enter array's elements:
a[0][0]=1
a[0][1]=2
a[0][2]=3
a[1][0]=4
a[1][1]=5
a[1][2]=6
a[2][0]=7
a[2][1]=8
a[2][2]=9
enter row number:0
elements of row 0:1, 2, 3,
the sum of a row 0: 6
enter column number:2
elements of column 2:3, 6, 9,
the sum of a column 2: 18
*/