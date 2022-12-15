#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a given integer.
 * @a: the integer parameter
 * Return: the last digit.
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		b = -b;
	}
	_putchar(b + '0');
	return (b);
}

