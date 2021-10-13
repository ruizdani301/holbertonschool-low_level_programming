#include "main.h"

/**
* print_array - print array
* @a:variable
* @n:variable
* Return: 0
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d", a[i]);
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
