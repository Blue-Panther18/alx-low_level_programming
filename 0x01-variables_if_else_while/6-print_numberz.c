#include <stdio.h>
/**
 * main - print all base 10 single digit using putchar function
 *
 * Return: 0
 */
int main(void)
{
	char a = '0';

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
