/*
打印任意长度的输入行的长度，并尽可能多地打印文本
*/ 
#include <Stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		printf("%d, %s", len, line);
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0) {
		printf("%s", longest);
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

void copy(char to[], char from[])
{
	int i;
	
	i = 0;
	while ((to[i] = from[i]) != '\0') {
		i++;
	}
}

























