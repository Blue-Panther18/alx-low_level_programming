#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all alphabets in lowercase then uppercase
 *
 * Return: 0
 */
int main(void)
{
	int x, y;

	x = y = 'A';
	while (x <= 'Z')
	{
		putchar(tolower(x));
		x++;
	};
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
