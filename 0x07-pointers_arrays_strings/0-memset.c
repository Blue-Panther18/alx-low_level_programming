#include "main.h"

/**
 * _memset - fills the memory with a value
 *
 * @s: The pointer to the address
 * @b: character parameter
 * @n: Area to be filled
 *
 * Return: a pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);


}
