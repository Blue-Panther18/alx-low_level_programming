#include "main.h"
/**
 * print_times_table - display multiplication table below 15
 * @n: integer parameter
 */
void print_times_table(int n)
{
	int a, b, m;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				m = a * b;
				if (m > 9 && m < 100)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				} else if (m > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				} else
				{
					if (b != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(m + '0');
				}
			}
			_putchar('\n');
		}
	}
}

