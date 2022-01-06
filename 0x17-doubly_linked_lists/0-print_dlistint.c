#include "lists.h"
/**
 * print_dlistint - print all the elements of a list_t list
 * @h: pointer
 * Return: (i)
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t  i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
