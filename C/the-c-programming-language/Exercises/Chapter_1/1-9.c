#include <stdio.h>
#include <stdbool.h>
/*
编写一个将输入复制到输出的程序，并将其中
连续的多个空格用一个空格代替
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
//书本方法 
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
