#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t
 * @head: pointer
 * @index: varibale
 * Return: data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	while (x <= index)
	{
		head = head->next;
		x++;
	}
	return (head);
}
