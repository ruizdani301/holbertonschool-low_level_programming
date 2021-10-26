#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *create_array - creates an array of chars, and initializes it with a
*   specific char.
* @c: variable
* @size: variable.
* Return: pointer.
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;
ptr = malloc(sizeof(char) * size);
	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}
