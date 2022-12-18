#include "main.h"
/**
 * print_diagonal - display \ n times
 * @n: integer parameter determines the number of times \ print
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	else
		for (a = 0; a < n; a++)
		{
			if (a > 0)
			{
				for (b = 0; b < a; b++)
					_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
	}
}
