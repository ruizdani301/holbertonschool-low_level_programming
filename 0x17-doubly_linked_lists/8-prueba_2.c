#include "lists.h"
/**
 * delete a index - pointer
 * @head: pointer
 * @index: pointer
 * Return: pointer
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *z = *head;
	unsigned int cont = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	while (tmp != NULL)
		{
			tmp = tmp->next;
			cont++;
		}
	if (tmp == NULL && cont < index)
		return (-1);
		tmp = (*head);
	if (index == 0 && cont <= 1)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	if (index == 0 && cont >= 1)
	{
		/* tmp->prev->next = tmp->next;
		   return(1);*/
		tmp = (*head);
		*head = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	tmp = (*head);
	cont = 0;
	while (tmp != NULL && cont < index )
	{
		*head = tmp;
		tmp = tmp->next;
		cont++;
	}
	if (tmp != NULL && cont > 0 && cont == index)
	{
		z = tmp;
		tmp = tmp->next;
		tmp->prev = (*head);
		(*head)->next =tmp;
		z->next = NULL;
		z->prev = NULL;
		free(z);
		return (1);
	}
	else if (tmp == NULL && cont == index)
	{
		free(tmp);
		(*head)->next = NULL;
		return (1);
	}
}