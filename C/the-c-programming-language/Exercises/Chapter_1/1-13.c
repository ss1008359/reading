#include <stdio.h>
#include <string.h>

#define MAX_WORD_SIZE 20
#define MAX_INPUT_WORD 10
#define DEFAULT_WORD_NUM 0

int main(void)
{
	int word_line[MAX_WORD_SIZE];
	memset(word_line, 0, sizeof(word_line));

	int ch = 0;
	int word_num = DEFAULT_WORD_NUM;
	int over_max_size_word = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == ' ' || ch == '\t' || ch == '\n')
		{
			if (word_num < MAX_WORD_SIZE)
			{
				++word_line[word_num];
			}
			else
			{
				++over_max_size_word;
			}

			word_num = 0;
		}
		else
		{
			++word_num;
		}
	}

	//输出水平直方图
	for (int i = 1; i < MAX_WORD_SIZE; ++i)
	{
		printf("%5d - %5d:", i, word_line[i]);
		if (word_line[i] > 0)
		{
			int length = word_line[i];
			while (length > 0)
			{
				putchar('*');
				--length;
			}
		}
		putchar('\n');
	}

	putchar('\n');
	//输出垂直直方图
	int maxvalue = 0;
	for (int i = 0; i < MAX_WORD_SIZE; ++i)
	{
		if (maxvalue < word_line[i])
		{
			maxvalue = word_line[i];
		}
	}

	for (int i = maxvalue; i > 0; --i)
	{
		for (int j = 1; j < MAX_WORD_SIZE; ++j)
		{
			if (i > word_line[j])
			{
				printf("   ");
			}
			else
			{
				printf(" * ");
			}
		}

		putchar('\n');
	}

	for (int i = 1; i < MAX_WORD_SIZE; ++i)	
	{
		printf("%4d  ", i);
	}

	putchar('\n');

	for (int i = 1; i < MAX_WORD_SIZE; ++i)	
	{
		printf("%4d ", word_line[i]);
	}

	putchar('\n');

	return 0;
}
