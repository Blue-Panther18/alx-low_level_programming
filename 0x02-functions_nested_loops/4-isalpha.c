#include "main.h"

/**
 * _isalpha - returns 1 for alphabet.
 *@c: the alphabet parameter
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
