#include "main.h"

/**
* puts2 - print stream
* @str:variable
* Return: 0
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i += 2;
	_putchar(str[i]);
}
