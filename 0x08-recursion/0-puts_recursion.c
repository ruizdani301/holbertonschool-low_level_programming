#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - check the code
 * @s:variable
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		_putchar(10);
	}
}
