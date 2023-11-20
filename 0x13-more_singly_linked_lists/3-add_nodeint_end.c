#include "lists.h"

/**
 * add_nodeint_end - main function
 * @head: first element in the list
 * @n: data 
 * Return: new node, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *p = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (p->next)
	p = p->next;

	p->next = new;

	return (new);
}
