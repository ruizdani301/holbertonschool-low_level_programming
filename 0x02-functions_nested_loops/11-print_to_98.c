#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - function that return (i + z)
 *@n: data one
 *Return: 98
 */
void print_to_98(int n)

{
	int i = 0;
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", n);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
}
