#include "main.h"

/**
 * _strcpy - add a string element to an array
 *
 * @dest: Array parameter
 *
 * @src: string parameter
 *
 * Return: Array of strings.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;

	do {
		i++;
		*(dest + i) = src[i];
	} while (src[i] != '\0');

	return (dest);
}
