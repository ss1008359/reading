#include <stdio.h>
#include <stdbool.h>
/*
��дһ�������븴�Ƶ�����ĳ��򣬲�������
�����Ķ���ո���һ���ո����
*/
int main(void)
{
	bool flat = false;
	int c;
	
	while ((c = getchar()) != EOF) {
		if (!flat) {
			putchar(c);
		}
		if (c == ' ') {
			flat = true;
		}
		else if (flat == true){
			flat = false;
			putchar(c);
		}
	}
	
	return 0;
} 

/*
//�鱾���� 
#include <stdio.h>

#define NONBLANK 'a'

int main(void)
{
	int c, lastc;
	
	lastc = NONBLANK;
	while ((c = getchar()) != EOF) {
		if (c != ' ' || lastc != ' ') {
			putchar(c);
		}
		lastc = c;
	}
	
	return 0;	
}
	
*/	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
