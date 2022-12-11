#include <stdio.h>
/**
 * main - print all base 16 numbers
 *
 * Return: 0
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	};
	char b = 'a';

	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
