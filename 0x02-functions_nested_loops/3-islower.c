#include "main.h"

/**
 * _islower - returns 1 for lowercase character
 * @c: this is character that will checked
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}

