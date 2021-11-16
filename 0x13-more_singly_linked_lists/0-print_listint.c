#include "lists.h"
/**
 * print_listint
 * @h: pointer
 * Return: Data
 */

size_t print_listint(const listint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
