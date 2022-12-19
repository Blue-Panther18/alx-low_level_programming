#include "main.h"

/**
 * swap_int - display the swapped value the variables
 *
 * @a: first pointer parameter
 *
 * @b: second pointer parameter
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
