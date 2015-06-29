#include <stdio.h>

/*
编写一个打印EOF值的程序 
*/
int main(void)
{
	int c;
	
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
	printf("%d\n", c);
	
	return 0;
} 
