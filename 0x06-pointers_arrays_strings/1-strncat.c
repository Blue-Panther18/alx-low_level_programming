#include "main.h"
/**
 * _strncat - cincatenate second string with the first by nth char
 * @dest: first string parameter
 * @src: second string parameter
 * @n: Integer parameter (number of concat char)
 *
 * Return: String.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
