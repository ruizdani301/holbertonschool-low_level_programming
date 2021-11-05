#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print char and numbers
 * @n: variable
 * @separator: pointer
 * Return: data
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int valor;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			valor = va_arg(list, int);
			printf("%d", valor);
			if (separator != NULL)
			{
				printf("%s", separator);
			}
			{
			}
		}
		else
		{
			valor = va_arg(list, int);
			printf("%d", valor);
		}
	}
	printf("\n");
	va_end(list);
}
