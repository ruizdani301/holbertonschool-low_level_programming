#include "main.h"

/**
*print_alphabet_x10 -  prints the alphabet, in lowercase,
*Return: 0
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar(10);
		}
}
