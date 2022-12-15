#include "main.h"

/**
 * _abs - displays the absolute value of an integer
 * @a: integer parameter
 * Return: Always 0.
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}

