#include "lists.h"

/**
 * free_listint - main function
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}

