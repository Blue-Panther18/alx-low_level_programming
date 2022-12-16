#include "main.h"

/**
 * jack_bauer - display every minutes of the day
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i, j, k, l, j_max;

	j_max = '9';
	for (i = '0'; i < '3'; i++)
	{
		if (i == '2')
			j_max = '3';
		for (j = '0'; j <= j_max; j++)
		{
			for (k = '0'; k < '6'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}

	}
}



