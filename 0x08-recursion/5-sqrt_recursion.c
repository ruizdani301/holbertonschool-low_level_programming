#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - factorial
 * @i:variable
 * @n:variable
 * Return: Always Data.
 */
int _sqrt(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt((i + 1), n));
	}
}
int _sqrt_recursion(int n)
{
	int i = 0;
		if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(i, n));
	}
}
