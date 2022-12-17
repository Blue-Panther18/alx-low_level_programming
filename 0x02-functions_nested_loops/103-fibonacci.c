#include <stdio.h>
/**
 * main - display sum of even fibonacci series that doesn't exceed 4,000,000
 * Return: 0
 */
int main(void)
{
	long a, b, c, sum;

	a = 0;
	b = 1;
	c = 0;
	sum = 0;
	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%ld\n", sum);
	return (0);
}
