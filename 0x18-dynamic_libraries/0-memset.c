#include "main.h"
#include <stdio.h>
/**
* _memset - toupper.
* @b: variable
* @n: variable
* @s: variable
* Return: (data)
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n != 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
