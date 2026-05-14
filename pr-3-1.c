#include<stdio.h>
int main()
{
	char i;
	i = 'a';
	do{
		if (i == '}'){
		break;
	}
		printf("%c\t",i);
		i+=3;
		
	}while (i>= 'z', i++);
	
}
/*
 a       e       i       m       q       u       y
*/