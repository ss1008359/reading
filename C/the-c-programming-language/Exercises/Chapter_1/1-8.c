#include <stdio.h>

/*
编写一个统计空格、制表符与换行符个数的程序
*/
int main(void)
{
	int c, space, table, nl;
	
	space = table = nl = 0;
	while((c = getchar()) != EOF) {
		if (c == ' ') {
			space++;
		}
		else if (c == '\t') {
			table++; 
		}
		else if (c == '\n') {
			nl++;
		}
	}
	
	printf("The space is %d, the table is %d, the n1 is %d", space, table, nl);
	
	return 0;
} 
