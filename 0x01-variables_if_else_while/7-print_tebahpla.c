#include <stdio.h>
/**
 * main - print all alphabets in reverse other
 *
 * Return: 0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
}
