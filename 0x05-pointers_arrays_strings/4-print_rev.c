#include "main.h"

/**
 * print_rev - print string reversely
 * @s: string parameter
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	for (i = 1; *(s + i) != '\0'; i++)
		n++;
	for (; n >= 0; n--)
		_putchar(*(s + n));
	_putchar('\n');
}

