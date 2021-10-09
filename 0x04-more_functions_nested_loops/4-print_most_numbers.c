#include "main.h"
/**
 *print_most_numbers - prints 0 to 9, least 2 and 4 followed by a new line
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar(10);
}
