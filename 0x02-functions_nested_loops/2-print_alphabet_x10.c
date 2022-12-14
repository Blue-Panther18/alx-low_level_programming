#include "main.h"
/**
 * print_alphabet_x10 - print all lowercase alphabet x10
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		char alp;

		alp = 'a';
		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		};
		_putchar('\n');
	};
}
