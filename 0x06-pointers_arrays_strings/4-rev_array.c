#include "main.h"
/**
* reverse_array - reverse.
* @a:variable
* @n:variable
* Return: (data)
*/
void reverse_array(int *a, int n)
{
	int c = 0;

	while (c < n)
	{
		int i1 = a[c];
		int i2 = a[n - 1];

		a[c] = i2;
		a[n - 1] = i1;
		c++;
		n--;
	}
}
