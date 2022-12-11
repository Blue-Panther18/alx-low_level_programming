#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - print all base 10 single digit using putchar function
 *
 * Return: 0
 */
int main(void)
{
	int a = 48;

	for (a = 48; a <= 57; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
