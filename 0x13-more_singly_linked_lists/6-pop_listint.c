#include "lists.h"

/**
 * pop_listint - main function
 * @head: first element in the linked list
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	p = (*head)->next;
	free(*head);
	*head = p;

	return (num);
}

