#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: int
 * @index : variable
 * Return: Data
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int tmp = 1;
	unsigned int res;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	res = (n & (tmp << index));
	if (res > 0)
		return (1);
	else
		return (0);
}
