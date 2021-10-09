#include "main.h"
/**
 *more_numbers - prints 0 to 9, least 2 and 4 followed by a new line
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <=  9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar(10);
	}
}
