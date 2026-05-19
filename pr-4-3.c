#include<stdio.h>
int main()
{
	int i, j, sp;
	for(i=5; i>=1; i--){ 
	   for(sp=1; sp<=i; sp++){
	   	printf("  ");
	   }
		for(j=5; j>=i; j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}
/*
          5
        5 4
      5 4 3
    5 4 3 2
  5 4 3 2 1
*/