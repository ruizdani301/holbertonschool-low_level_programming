#include "main.h"
/**
 *print_square - prints square
 *@size:size
 */
void print_square(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	_putchar(10);
}
