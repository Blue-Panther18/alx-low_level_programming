#include <stdio.h>

#define MAXSTRING 80

/**
 * main - Entry point 
 *
 * Return: Always 1 (Success)
 *
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	for (int count = 0; count < MAXSTRING; count++)
		if (message[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(message[count]);
	
	return(1);
}

