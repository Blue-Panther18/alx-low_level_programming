#include "main.h"

/**
 * _strncpy - copy a string into another string
 *
 * @dest: First string parameter
 * @src: Second String parameter
 * @n: Integer parameter
 *
 * Return: String
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	for (; j < n; j++)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


