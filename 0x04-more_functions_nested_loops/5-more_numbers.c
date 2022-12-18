#include "main.h"

/**
 * more_numbers - display all integer from 0 - 14 (10 times)
 */
void more_numbers(void)
{
	int i, a, b;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			b = a;
			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}





