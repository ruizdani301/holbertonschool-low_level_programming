#include "main.h"
#include <stdio.h>
/**
 * is_prime - recursion
 * @n:variable
 * @i:variable
 * Return: Always Data.
 */
int is_prime(int i, int n)
{
	if (i == n && n % i == 0)
	{
		return (1);
	}
	else if (i != n && n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime(i + 1, n));
	}
}
/**
 * is_prime_number -recursion
 * @n:variable
 * Return: Always Data.
 */
int is_prime_number(int n)
{
	int i = 2;
		if (n < 2)
	{
		return (0);
	}
	return (is_prime(i, n));
}
