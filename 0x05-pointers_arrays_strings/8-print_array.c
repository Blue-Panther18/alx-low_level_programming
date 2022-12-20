#include "main.h"
#include <stdio.h>

/**
 * print_array - print the elements of an array
 *
 * @a: array parameter
 *
 * @n: number of the elements in the array
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i != n)
			printf(", ");
	}
	putchar('\n');
}
