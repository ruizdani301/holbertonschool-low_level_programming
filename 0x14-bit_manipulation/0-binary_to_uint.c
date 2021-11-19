#include "main.h"
/**
 * binary_to_uint - convert binary to int
 * @b: pointer
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int mult = 1;
	unsigned int dec = 0;
	int x;

	while (b[n] != '\0')
	{
		n++;
	}
	n = n - 1;
	for (x = n; x >= 0; x--)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		else if (b[x] > 'a' && b[x] < 'z')
			return (0);
		else if (b[x] > 'A' && b[x] < 'Z')
			return (0);
		else if (b == NULL)
			return (0);
		if (b[x] == '1')
			dec += mult;
		mult = mult * 2;
	}
	return (dec);
}
