#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - suma todos los valores de n
 * @n: variable
 * Return: data
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int valor;
	unsigned int suma = 0;
	va_list parametros;

	if (n == 0)
	{
		return (0);
	}
	va_start(parametros, n);
	for (i = 0; i < n; i++)
	{
		valor = va_arg(parametros, int);
		suma += valor;
	}
	va_end(parametros);
	return (suma);
}
