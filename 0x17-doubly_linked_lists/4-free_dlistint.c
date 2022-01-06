#include "lists.h"
/**
 * *free_dlistint - free node
 * @head: double pointer to the dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
