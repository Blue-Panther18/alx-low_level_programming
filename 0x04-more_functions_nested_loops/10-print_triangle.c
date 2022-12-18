#include "main.h"
/**
 * print_triangle - display # (size times)
 *
 * @size: integer parameter
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
		_putchar('\n');
	for (a = 1; a <= size; a++)
	{
		if (a < size)
		{
			for (b = size; b > a; b--)
				_putchar(32);
		}
		for (c = 0; c < a; c++)
			_putchar('#');
		_putchar('\n');
	}
}
