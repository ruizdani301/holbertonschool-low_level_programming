#include "main.h"

/**
*swap_int - point to swap
*@a:variable
*@b:variabl 2
*Return: 0
*/
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*b = c;
	*a = d;
}
