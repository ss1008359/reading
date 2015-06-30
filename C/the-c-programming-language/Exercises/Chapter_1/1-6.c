#include <stdio.h>

/*
验证表达式getchar() != EOF的值是0还是1
*/
int main(void)
{
	int c;
	
	while (c = getchar() != EOF) {
		printf("%d\n", c);
	}
	printf("%d\n", c);
	
	return 0;
} 
