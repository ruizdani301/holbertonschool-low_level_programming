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
	unsigned int i = 0, j = 0, count2 = 0, count = 0, total = 0;

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
	while (s2[i] != '\0')
	{
		i++;
		count2++;
	}
	if (n >= count2)
		total =	count + count2;
	else
		total =	count + n;
	p = malloc(sizeof(char) * (total + 1));
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
	while (total >= i)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	return (p);
}
