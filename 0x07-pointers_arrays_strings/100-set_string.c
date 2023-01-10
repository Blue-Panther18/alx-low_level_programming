#include "main.h"

/**
 * set_string - replace string characters with another
 *
 * @s: String to be replaced
 * @to: String to be replaced with
 *
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = &to[0];
}
