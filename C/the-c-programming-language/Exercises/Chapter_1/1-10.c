#include <stdio.h>

/*
��дһ�������븴�Ƶ�����ĳ���
�Ʊ���滻Ϊ\t
���˷��滻Ϊ\b
��б���滻Ϊ\\ 
�Կɼ���ʽ��ʾ 
*/
int main(void)
{
	int c;
	
	while((c = getchar()) != EOF) {
		if (c == '\t') {
			printf("\\t");
		}
		else if (c == '\b') {
			printf("\\b");
		}
		else if (c == '\\') {
			printf("\\\\");
		}
		else {
			putchar(c);
		}
	}
	
	return 0;
} 
