#include "main.h"

/**
 * _strlen - return the length of the variable string
 *
 * @s: string parameter
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int i, length;

	length = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		length++;
	}
	return (length);
}

