#include "lists.h"
/**
* pop_listint - deletes the head node
* @head: pointer
* Return: (head)
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x;

	x = (*head)->n;
	tmp = (*head);
	*head = (*head)->next;
	free(tmp);
	return (x);

}
