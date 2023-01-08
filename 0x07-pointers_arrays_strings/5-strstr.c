#include "main.h"

/**
 * _strstr - searches for a substring in a string
 *
 * @haystack: main string parameter
 * @needle: substring parameter
 *
 * Return: a pointer to beginning location
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (needle[0] == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; haystack[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}


