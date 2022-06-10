#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
* linear_search- method name
* @array: array
* @size: size
* @value: value
* Return: return value
*/
int linear_search(int *array, size_t size, int value)
{
	int num = 0;

	if (array == NULL)
		return (-1);
	for (num = 0; num < (int)size; num++)
	{
		printf("Value checked array[%d] = [%d]\n", num, array[num]);
		if (value == array[num])
		{
			return (array[num]);
		}
	}
	return (-1);
}
