#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - display from a given integer to 98
 * @n: inputed parameter
 */
void print_to_98(int n)
{
	for (n = n; n < 98; n++)
	{
		printf("%d", n);
		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
	};
	for (n = n; n >= 98; n--)
	{
		printf("%d", n);
		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		};
	};
	putchar('\n');
}

