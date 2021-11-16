#include "lists.h"

/**
 * free_listint2 -  free the list and set the header
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while ((*head) != NULL)
	{
		tmp = (*head);
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
