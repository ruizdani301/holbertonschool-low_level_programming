#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - check the code
 * @s1: variable
 * @s2: variable
 * @n: variable
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0;
	unsigned int j = 0;
	int count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
		count++;
	}
	i = 0;
	while (n >= i)
	{
		i++;
		count++;
	}
	count++;
	p = malloc(sizeof(char) * count);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (n >= j)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i +1] = '\0';
	return (p);
}
