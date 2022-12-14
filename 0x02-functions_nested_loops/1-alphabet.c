#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print all the alphabets in  lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	};
	_putchar('\n');
}
