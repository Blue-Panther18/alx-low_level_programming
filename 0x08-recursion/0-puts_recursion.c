#include "main.h"

/**
 * _puts_recursion - displays a string
 *
 * @s: char parameter
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
	



