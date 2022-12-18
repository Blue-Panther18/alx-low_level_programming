#include "main.h"

/**
 * print_line - displays a line n times
 * @n: integer parameter that control the number of lines
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
		_putchar('_');
	_putchar('\n');
}
