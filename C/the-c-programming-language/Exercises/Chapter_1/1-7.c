#include <stdio.h>

/*
��дһ����ӡEOFֵ�ĳ��� 
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
