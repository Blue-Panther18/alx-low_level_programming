#include "main.h"

/**
 * leet - encode a string to 1337
 *
 * @str: String parameter
 *
 * Return: encoded string.
 */
char *leet(char *str)
{
	int i = 0, j;
	char leet[] = {'O', 'L', '/', 'E', 'A', '/', '/', 'T'};

	while (str[i])
	{
		for (j = 0; j < 8; j++)
			if (str[i] == leet[j] ||
					str[i] - 32 == leet[j])
			{
				str[i] = j + '0';
			}
		i++;
	}
	return (str);
}
