#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals
 *
 * @a: array parameter
 * @size: array size parameter
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	long int diagright, diagleft;

	diagright = 0;
	diagleft = 0;
	j = size;

	for (i = 0; i < size; i++)
	{
		j--;
		diagleft += a[(size * i) + i];
		diagright += a[j + (size * i)];
	}
	printf("%ld, %ld\n", diagleft, diagright);
}


