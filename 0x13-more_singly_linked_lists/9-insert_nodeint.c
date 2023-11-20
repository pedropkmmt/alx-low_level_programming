#include "lists.h"

/**
 * insert_nodeint_at_index - main function
 * @head: first node in the list
 * @idx: index where the new node is added
 * @n: data
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *p = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; p && i < idx; i++)
	{
	if (i == idx - 1)
	{
		new->next = p->next;
		p->next = new;
		return (new);
	}
	else
		p = p->next;
	}

	return (NULL);
}
