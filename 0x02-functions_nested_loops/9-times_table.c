#include "main.h"
/**
 * times_table - prints tables
 */
void times_table(void)
{
	int a = 0;
	int i = 0;

	for (a = 0; a <= 9; a++)
	{
		for (i = 0; i <= 9; i++)
		{
			c = (a * i);
			if (c <= 9)
			{
				_putchar((c % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar(',');
		}	_putchar(10);
	}
}
