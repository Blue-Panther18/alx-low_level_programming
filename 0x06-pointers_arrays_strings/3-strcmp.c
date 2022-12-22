#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string parameter
 * @s2: second string parameter
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k;

	k = 0;
	j = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			k++;
		else if (s1[i] < s2[i])
			j++;
	}
	if (k > j)
		i = 15;
	else if (k < j)
		i = -15;
	else
		i = 0;
	return (i);
}
