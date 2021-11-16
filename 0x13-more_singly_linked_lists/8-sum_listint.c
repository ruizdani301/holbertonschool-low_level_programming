#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data (n)
 * @head: pointer
 * Return: Data
 */
int sum_listint(listint_t *head)
{
	unsigned int n = 0;

	if (head == NULL)
		return (-1);
	while  (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
