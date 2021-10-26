#include "main.h"
#include <stdio.h>

/**
 * _strdup -  function that returns a pointer to a newly.
 * @str: variable
 * Return: pointer.
 */
char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
