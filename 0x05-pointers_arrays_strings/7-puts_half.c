#include "main.h"

/**
* puts_half - print stream
* @str:variable
* Return: 0
*/
void puts_half(char *str)
{
	int c = 0;
	int i = 0;
	int a = 0;

	while (*(str + i))
		i++;
	if (i % 2 == 0)
	{
		a = (i / 2);
		for (c = a; c <= i; c++)
		{
			_putchar(str[c]);
		}
		_putchar(10);
	}
	if (i % 2 != 0)
	{
		a = ((i - 1) / 2);

		for (c = a; c <= i; c++)
		{
			_putchar(str[c]);
		}
		_putchar(10);
	}
}
