#include "main.h"

/**
 * reverse_array - reverse content
 *
 * @a: Array of integers
 * @n: size of array
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, half;

	half = n / 2;
	for (i = n - 1; i > half; i--)
	{
		j = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = j;
	}
}


