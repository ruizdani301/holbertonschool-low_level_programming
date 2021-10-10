#include "main.h"
/**
 * print_diagonal - print diagonal line on the terminal
 * @n: data
 */
void print_diagonal(int n)
{
	int i = 0;
	int x = 0;

	for (i = 0; i < n; i++)

	{
		for (x = 0; x <= i; x++)
		{
			if (x < i)
			{
				_putchar(32);
			}
			else
			{
				_putchar(92);
			}
			
		}
	_putchar(10);
	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
