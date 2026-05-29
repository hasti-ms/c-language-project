#include<stdio.h>

int add(int a, int b)
{
   printf("Addition of %d and %d is %d\n", a, b, a+b);
}

int sub(int a, int b)
{
   printf("Subtraction of %d and %d is %d\n", a, b, a-b);
}

int mul(int a, int b)
{
   printf("Multiplication of %d and %d is %d\n", a, b, a*b);
}

int div(int a, int b)
{
   printf("Division of %d and %d is %d\n", a, b, a/b);
}

int mod(int a, int b)
{
   printf("Module of %d and %d is %d\n", a, b, a%b);
}

int main()
{
	int a, b, choice;
	while(1){
	
    printf("\nPress 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %% \n");
	printf("Press 0 for the exit\n");
	
	printf("Enter your choice:");
	scanf("%d", &choice);	
	
	if (choice == 0){
		break;
	}
	
	printf("Enter the first number:");
	scanf("%d", &a);
	
	printf("Enter the second number:");
	scanf("%d", &b);
	
	switch(choice){
		case 1:
			add(a,b);
			break;
		case 2:
			sub(a,b);
			break;
		case 3:
			mul(a,b);
			break;
		case 4:
			div(a,b);
			break;
		case 5:
			mod(a,b);
			break;
		
	    }
    }
}
/* 
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice:1
Enter the first number:1
Enter the second number:2
Addition of 1 and 2 is 3

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice:2
Enter the first number:3
Enter the second number:2
Subtraction of 3 and 2 is 1

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice:0
*/