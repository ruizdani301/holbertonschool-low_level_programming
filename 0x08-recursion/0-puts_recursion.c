#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - check the code
 * @s:variable
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
