#include<stdio.h>
int main()
{
	int r, c;
	printf("enter the array's row size:");
	scanf("%d",&r);
	printf("enter the array's column size:");
	scanf("%d",&c);
	
	int a[r][c];
	printf("enter array's elements:\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
    }
	int l= a[0][0];
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if (a[i][j]>l){
				l = a[i][j];
			}
			
		}
	}
	printf("the largest element is: %d", l);
}
/*
enter the array's row size:3
enter the array's column size:3
enter array's elements:
a[0][0]= 3
a[0][1]= 7
a[0][2]= 5
a[1][0]= 2
a[1][1]= 8
a[1][2]= 6
a[2][0]= 55
a[2][1]= 32
a[2][2]= 9
the largest element is: 55
*/