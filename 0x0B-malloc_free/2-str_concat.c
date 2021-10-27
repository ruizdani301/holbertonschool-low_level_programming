#include "main.h"
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: variable
 * @s2: variable
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int j = 0;
	int count = 0;

	while (s1[i] != '\0')
	{
		i++;
		count++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		count++;
	}
	count++; /* 1 seria  caracter nulo y 1 para  espacio que hay entre*/
	ptr = malloc(sizeof(char) * count);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{

		ptr[i] = s2[j];
		i++;
		j++;
	}

	return (ptr);
}
