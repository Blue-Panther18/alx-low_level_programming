#include "main.h"

/**
 * rot13 - encoded letters using rot13
 *
 * @str: string parameter
 *
 * Return: A character pointer.
 */
char *rot13(char *str)
{
	int i, j;

	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			     'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd',
			     'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p',
			     'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'y', 'z'};

	char rotBet[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			  'T', 'U', 'V', 'W', 'X', 'Y',
			  'Z', 'A', 'B', 'C', 'D', 'E',
			  'F', 'G', 'H', 'I', 'J', 'K',
			  'L', 'M', 'n', 'o', 'p', 'q',
			  'r', 's', 't', 'u', 'v', 'w',
			  'x', 'y', 'z', 'a', 'b', 'c',
			  'd', 'e', 'f', 'g', 'h', 'i',
			  'j', 'k', 'l', 'm'};

	i = 0;
	while (str[i])
	{
		for (j = 0; j < 52; i++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rotBet[j];
			}
		}
		i++;
	}
	return (str);
}

