#include <stdio.h>
/**
 * main - display the first 50 fibonacci series.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	long c, a, b;

	a = 0;
	b = 1;
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%ld", c);
		if (i < 49)
			printf(", ");
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}

