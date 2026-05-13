#include<stdio.h>
int main()
{
	int s;
	char g;
	printf("Enter your score:");
	scanf("%d",&s);
	  g = (s >= 90) ? 'A':
	  	  (s >= 70) ? 'B':
	  	  (s >= 50) ? 'C':
	  	  (s >= 35) ? 'D': 'F';
	  	  
	printf("your grade is:%c",g);
	  
	  switch(g){
	    	case 'A':
	    		printf("\nExcellent work!!");
	    		break;
	    	case 'B':
	    		printf("\nWell done");
	    		break;
	    	case 'C':
	    		printf("\nGood job");
	    		break;
	    	case 'D':
	    		printf("\nYou passed");
	    		break;
	    	case 'F':
	    		printf("\nSorry, you failed");
	    		break;
		}if (g == 'A' ||g == 'B' ||g =='C' ||g =='D'){
			printf("\nCongratulations! You are eligible for the next level");
		}else{
			printf("\nPlese try again next time.");
		}
	    
}
/*
Enter your score:76
your grade is:B
Well done
Congratulations! You are eligible for the next level
*/