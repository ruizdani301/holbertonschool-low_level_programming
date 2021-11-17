#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer
 * @idx: variable
 * @n: variable
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int x = 1;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);


	while (x != idx)
	{
		*head = (*head)->next;
		x++;
	}
	/**
	 * if (*head->next = NULL)
	 *   {
	 *   return (NULL);
	 *   }
	*/
	tmp = (*head);
	tmp = tmp->next;
	(*head)->next = new;
	new->n = n;
	new->next = tmp;
	return (*head);
}
