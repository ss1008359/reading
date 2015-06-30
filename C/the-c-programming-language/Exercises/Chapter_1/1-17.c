/*
打印长度大于80个字符的所以输入行。
*/
#include <Stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);

int main(void)
{
	int len;
	int max;
	char line[MAXLINE];
	
	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > 80)
		printf("%d, %s", len, line);
	}
	
	return 0;
}

int getline(char s[], int lim)                //读取任意长度，省略超出长度的部分。 
{
	int c, i, j;
	
	for (i = 0, j = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < lim - 2) {
			s[j++] = c;
		}
	}
	if (c == '\n') {
		s[j++] = '\n';
		i++;
	}
	s[j] = '\0';
	return i;
}

