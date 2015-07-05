#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAXLINE 1000
#define DEFAULT_STAR_SPACE -1

int GetLine(char *line, int max_line);
bool CheckAllSpaceLine(char *line, int max_line);
void Reverse(char *line, int word_line);

int main(void)
{
	char line[MAXLINE];
	memset(line, 0, sizeof(line));
	int word_length = GetLine(line, MAXLINE);

	if (!CheckAllSpaceLine(line, MAXLINE))
	{
		Reverse(line, word_length);
	}
	printf("the reverse line is %s\n", line);

	return 0;
}


int GetLine(char *line, int max_line)
{
	int ch = 0;
	int i = 0;
	for (; i < max_line - 1 && ((ch = getchar()) != EOF && ch != '\n'); ++i)
	{
		line[i] = ch;
	}

	line[max_line] = '\0';
	return i;
}

bool CheckAllSpaceLine(char *line, int max_line)
{
	for (int i = 0; i < max_line - 1; ++i)
	{
		if (' ' != line[i] && '\0' != line[i])
		{
			return false;
		}
	}

	return true;
}


void Reverse(char *line, int word_line)
{
	if (word_line <= 0)
	{
		return;
	}

	for (int i = 0; i < word_line/2; ++i)	
	{
		char ch = line[i];
		line[i] = line[word_line - i - 1];
		line[word_line - i - 1] = ch;
	}
}








