#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: character parameter to be copied to
 * @src: character parameter to be copied from
 * @n: memory size parameter
 *
 * Return: a pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
