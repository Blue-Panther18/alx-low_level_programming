#include "main.h"

/**
 * puts_half - print the second half of string
 *
 * @s: string parameter
 *
 * Return: Nothing.
 */
void puts_half(char *s)
{
	int i, n;

	i = 0;

	while (s[i])
		i++;
	if (i % 2 == 0)
	{
		n = i / 2;
		for (; n < i; n++)
			_putchar(s[n]);
	}
	else
	{
		n = (i - 1) / 2;
		for (; n < i; n++)
			_putchar(s[n]);
	}
	_putchar('\n');
}
