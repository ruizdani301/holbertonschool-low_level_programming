#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: the integer to print
 * @size: size
 * @action: parameter
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
