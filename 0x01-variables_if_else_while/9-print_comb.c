#include <stdio.h>
/**
 * main - print all possible single digit number combinations
 *
 * Return: 0
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		if (a == 57)
		{
			putchar('$');
		} else
		{
			putchar(',');
			putchar(' ');
		};
		a++;
	};
	putchar('\n');
	return (0);
}
