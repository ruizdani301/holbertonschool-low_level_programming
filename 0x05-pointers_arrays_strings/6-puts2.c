#include "main.h"

/**
* puts2 - print stream
* @str:variable
* Return: 0
*/
void puts2(char *str)
{
	int i = 0;
	int c;

	while (str[i] != '\0')
		i++;
	for (c = 0; c < i; c += 2)
	{
		_putchar(str[c]);
	}

	_putchar(10);
}
