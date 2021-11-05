#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print char and numbers
 * @n: variable
 * @separator: pointer
 * Return: data
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char  *valor;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		valor = va_arg(list, char *);

		if (valor != NULL)
		{
			printf("%s", valor);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
