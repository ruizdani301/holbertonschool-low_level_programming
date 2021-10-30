#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - created should contain all the values from min to max
 * @min: the address of memory to print
 * @max: the size of the memory to print
 * Return: pointer;
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *p;
	int a;

	a = min;
	if (min > max)
	{
		return (NULL);
	}
	while (min <= max)
	{
		min++;
		i++;
	}


	p = (int *) malloc(sizeof(int) * i);

	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (a <= max)
	{
		p[i] = a;
		i++;
		a++;
	}
	return (p);
}
