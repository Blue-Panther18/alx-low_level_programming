#include <stdio.h>
#include <ctype.h>
/**
 * main - print the lowercase of all alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}

