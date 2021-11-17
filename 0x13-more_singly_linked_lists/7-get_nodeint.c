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

	while (x < index)
	{
		if (head != NULL)
		{
			head = head->next;
		}
		else
		{
			return (NULL);
		}
		x++;
	}
	return (head);
}
