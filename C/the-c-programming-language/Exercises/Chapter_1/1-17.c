/*
��ӡ���ȴ���80���ַ������������С�
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

int getline(char s[], int lim)                //��ȡ���ⳤ�ȣ�ʡ�Գ������ȵĲ��֡� 
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

