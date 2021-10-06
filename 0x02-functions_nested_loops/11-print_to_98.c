#include "main.h"
/**
 *print_to_98 - function that return (i + z)
 *@n: data one
 *Return: 98
 */
void print_to_98(int n)

{
	if (n < 98)
	{
		for (n = 'n'; n < 98; n++)
		{
			_putchar('n');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(10);
	if (n > 98)
	{
		for (n = n; n > 98; n--)
		{
		_putchar('n');
		_putchar(',');
		_putchar(' ');
	}
	_putchar(10);
}
}
