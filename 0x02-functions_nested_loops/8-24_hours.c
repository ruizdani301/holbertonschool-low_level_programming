#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - show the time
 * Return: 0
 */
void jack_bauer(void)
{
	int i = 0, j = 0;

	for (i = 0; i <= 24; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar ((i / 10) + 48);
			_putchar ((i % 10) + 48);
			_putchar (':');
			_putchar ((j / 10) + 48);
			_putchar ((j % 10) + 48);
			_putchar (10);
		}
	}
}
