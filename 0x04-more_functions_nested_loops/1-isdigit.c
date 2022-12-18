#include "main.h"
/**
 * _isdigit - returns 1 if c is a digit and 0 if not
 * @c: integer parameter
 * Return: 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
