 #include "main.h"

/**
 * _pow_recursion - returns an integer raised to power of another
 *
 * @x: first integer parameter
 * @y: second integer parameter
 *
 * Return: Integer.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
