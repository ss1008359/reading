#include <stdio.h>

/*
��֤���ʽgetchar() != EOF��ֵ��0����1
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
