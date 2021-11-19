#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: variable
 */

void print_binary(unsigned long int n)
{
	unsigned long int b = n;
	int i = 0;

	if (n == 0)
		putchar('0');

	while (b > 0)
	{
		b >>= 1;
		i++;
	}

	i--;

	while (i >= 0)
	{
		if (1 & (n >> i))
			putchar('1');
		else
			putchar('0');
		i--;
	}
}
