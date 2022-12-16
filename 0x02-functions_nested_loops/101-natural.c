#include <stdio.h>
/**
 * main - display the sum of multiple of 3 or 5 between 0 - 1024
 * Return: 0
 */
int main(void)
{
	int a, b, sum;

	a = 1024;
	sum = 0;
	for (b = 0; b < a; b++)
	{
		if (b % 3 == 0 || b % 5 == 0)
		{
			sum = sum + b;
		};
	}
	printf("%d\n", sum);
	return (0);
}

