#include <stdio.h>
/**
 * main - print all base 16 numbers
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	a = 48;
	while (a <= 57)
	{
		putchar(a);
		a++;
	};
	b = 97;
	while (b <= 102)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
