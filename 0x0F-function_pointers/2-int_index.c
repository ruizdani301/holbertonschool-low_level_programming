#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - search the number.
 *@array: array
 *@size :size
 *@cmp: pointer
 *Return: value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))

			return (i);
		i++;
	}
	return (-1);
}
