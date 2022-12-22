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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}


