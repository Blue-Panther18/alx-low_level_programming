#include "main.h"

/**
 * times_table - display muliplication table of 0 - 9
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b, m, l, f;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			m = a * b;
			f = m / 10;
			l = m % 10;
			if (m == 0)
			{
				_putchar('0');
			} else if (m < 10)
			{
				_putchar(l + '0');
			} else
			{
				_putchar(f + '0');
				_putchar(l + '0');
			};
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
