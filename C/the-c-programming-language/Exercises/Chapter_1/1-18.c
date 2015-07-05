#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAXLINE 1000
#define DEFAULT_STAR_SPACE -1

void GetLine(char *line, int max_line);
bool CheckAllSpaceLine(char *line, int max_line);
void PrintLine(char *line, int max_line);

int main(void)
{
	char line[MAXLINE];
	memset(line, 0, sizeof(line));
	GetLine(line, MAXLINE);

	if (CheckAllSpaceLine(line, MAXLINE))
	{
		printf("the line is all space\n");
	}
	else
	{
		PrintLine(line, MAXLINE);
	}

	return 0;
}


void GetLine(char *line, int max_line)
{
	int ch = 0;
	for (int i = 0; i < max_line - 1 && ((ch = getchar()) != EOF && ch != '\n'); ++i)
	{
		line[i] = ch;
	}

	line[max_line] = '\0';
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

void PrintLine(char *line, int max_line)
{
	int space_star = DEFAULT_STAR_SPACE;
	bool is_set_space_star = false;

	for (int i = 0; i < max_line; ++i)
	{
		if (' ' == line[i])
		{
			if (!is_set_space_star)
			{
				space_star = i;
				is_set_space_star = true;
			}
		}
		else if ('\0' == line[i] && is_set_space_star && DEFAULT_STAR_SPACE != space_star)
		{
			line[space_star] = '\0';
			break;
		}
		else
		{
			space_star = DEFAULT_STAR_SPACE;
			is_set_space_star = false;
		}
	}

	printf("line is %s end\n", line);
}









