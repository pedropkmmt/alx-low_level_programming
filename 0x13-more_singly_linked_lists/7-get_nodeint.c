#include "lists.h"

/**
 * get_nodeint_at_index - main function
 * @head: linked list
 * @index: index of the node 
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p = head;

	while (p && i < index)
	{
		p = p->next;
		i++;
	}

	return (p ? p : NULL);
}

