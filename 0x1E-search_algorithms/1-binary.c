#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search- method name
 * @array: array
 * @size: size
 * @value: value
 * Return: return value
*/
int binary_search(int *array, size_t size, int value)
{
	int num = 0;
	int inicio = 0;
	int final = (int)size - 1;
	int mitad = 0;

	if (array == NULL)
		return (-1);

	while (inicio <= final)
	{
		mitad = ((inicio + final) / 2);
		printf("Searching in array: ");
		for (num = inicio; num < final; num++)
		{
			printf("%d, ", array[num]);
		}
		printf("%d\n", array[num]);
		if (array[mitad] < value)
			inicio = mitad + 1;
		else if (array[mitad] > value)
			final = mitad - 1;
		else
			return (mitad);
	}
	return (-1);
}
