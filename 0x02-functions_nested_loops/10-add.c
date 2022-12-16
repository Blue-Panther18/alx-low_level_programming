#include "main.h"

/**
 * add - display the sum of two integers.
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: Always 0.
 */
int add(int a, int b)
{
	int sum, first, last;

	sum = a + b;
	first = sum / 10;
	last = sum % 10;
	if (sum < 10)
		_putchar(last + '0');
	else
	{
		_putchar(first + '0');
		_putchar(last + '0');
	}
	_putchar('\n');
	return (0);
}

