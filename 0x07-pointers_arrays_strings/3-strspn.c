#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: main string parameter
 * @accept: substring parameter
 *
 * Return: Integer.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (s[j] == '\0')
			return (k);
	}
	return (k);
}

