#include "lists.h"
/**
 * list_len -  returns the number of elements
 * @h: pointer
 * Return:(x)
 */

size_t list_len(const list_t *h)
{
	size_t  x = 0; /**  why size_t*/

	while (h != NULL)
	{
		h = h->next;/** h becomes the header*/
		x++;
	}
	return (x);
}
