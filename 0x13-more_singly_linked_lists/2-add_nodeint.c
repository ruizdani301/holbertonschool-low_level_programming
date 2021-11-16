#include "lists.h"
/**
 * *add_nodeint - return adress
 * @n: variable
 * @head: pointer
 * Return: data
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = (*head); /** no ampersan*/
	(*head) = new;

	return (*head);/**segun ves return head*/
}
