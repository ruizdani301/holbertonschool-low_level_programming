#include "main.h"
#include <stdio.h>
/**
 * factorial - factorial
 * @n:variable
 * Return: Always Data.
 */
int factorial(int n)
{
if (n == 1)
{
return (1);
}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
