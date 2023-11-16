#include "lists.h"

/**
 * add_node_end - main function
 * @head: node
 * @str: string
 * Return: adress
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnodes, *nd;
	unsigned int i;
	unsigned int count;

	newnodes = malloc(sizeof(list_t));
	if (newnodes == NULL)
		return (NULL);
	newnodes->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnodes->len = count;
	newnodes->next = NULL;
	nd = *head;

	if (nd == NULL)
		*head = newnodes;
	else
	{
		while (nd->next != NULL)
			nd = nd->next;
		nd->next = newnodes;
	}
	return (*head);
}
