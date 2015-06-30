/*
以每行一个单词的形式打印其输出
*/ 
#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
	int c, preState, nowState;
	
	preState = nowState = OUT;
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == ' ' || c == '\t') {
			nowState = OUT;
		}
		else {
			nowState = IN;
		}
		if (nowState == IN) {
			putchar(c);
		}
		if (preState == IN && nowState == OUT) {
			putchar('\n');
		}
		preState = nowState;
	}
	
	return 0;
}
/*
#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
	int c, state;
	
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				putchar('\n');           //finish the word
				state = OUT;
			}
		}
		else if (state == OUT) {
			state = IN;                 //beginning the word
			putchar(c);
		}
		else {                          //inside the word
			putchar(c);
		}
	}
	return 0;
}
*/






















