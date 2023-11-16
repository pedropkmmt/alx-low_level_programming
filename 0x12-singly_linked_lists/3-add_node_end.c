#include "lists.h"

/**
 * add_node_end - main function
 * @head: node
 * @str: string
 * Return: adress
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *tmp = *head;
	unsigned int i = 0;

	while (str[i])
	i++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
	return (NULL);

	new->str = strdup(str);
	newnode->i = i;
	newnode->next = NULL;
	if (*head == NULL)
	{
	*head = newnode;
	return (newnode);
 	}
	while (tmp->next)
	tmp = tmp->next;
	tmp->next = newnode;
	return (newnode);

}
