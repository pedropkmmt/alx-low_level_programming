#include "lists.h"

/**
 * sum_listint - main function
 * @head: first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p = head;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}
