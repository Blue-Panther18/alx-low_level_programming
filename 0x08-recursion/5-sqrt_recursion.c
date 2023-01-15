#include "main.h"

/**
 * _sqrt_recursion - returns the squared root of an integer
 *
 * @n: integer parameter
 * @i: integer parameter
 * Return: Integer.
 */
int evaluate(int i, int n);

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
		return (evaluate(i, n));
}

/**
 * evaluate - evaluate and compare the values
 *
 * @i: Integer parameter
 * @n: Integer parameter
 *
 * Return: Integer
 */
int evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i == n)
		return (i);
	else if (i * i < n)
		return (evaluate(i + 1, n));
	return (-1);
}


