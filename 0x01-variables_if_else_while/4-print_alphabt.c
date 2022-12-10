#include <stdio.h>
#include <ctype.h>
/**
 * main - print all alphabets except from q and e in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		if (x != 'Q' && x != 'E')
		{
			putchar(tolower(x));
			x++;
		} else
		{
			x++;
		}
	}
	putchar('\n');
	return (0);
}
