#include "main.h"

/**
* print_rev - print stream
* @s:variable
* Return: 0
*/
void print_rev(char *s)
{
	int c;
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (c = i; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar(10);
}
