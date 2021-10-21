#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - factorial
 * @x:variable
 * @y:variable
 * Return: Always Data.
 */
int _pow_recursion(int x, int y)
{int a;
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	a = x * _pow_recursion(x, (y - 1));
	return (a);
}
