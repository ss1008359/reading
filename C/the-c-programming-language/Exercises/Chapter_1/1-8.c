#include <stdio.h>

/*
��дһ��ͳ�ƿո��Ʊ���뻻�з������ĳ���
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
