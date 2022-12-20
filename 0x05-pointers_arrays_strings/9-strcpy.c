#include "main.h"

/**
 * _strcpy - add a string element to an array
 *
 * @dest: Array parameter
 *
 * @scr: string parameter
 *
 * Return: Array of strings.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	do {
		*(dest + i) = src[i];
		i++;
	} while (src[i] != '\0');

	return (dest);
}
