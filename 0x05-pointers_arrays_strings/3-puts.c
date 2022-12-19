#include "main.h"

/**
 * _puts - print to standard output
 *
 * @s: string parameter
 *
 * Return: Nothing.
 */
void _puts(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		_putchar(*(s + i));
	_putchar('\n');
}

