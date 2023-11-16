#include "lists.h"
/**
 * add_node - main function
 * @head: node
 * @str: string
 * Return: adress
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnodes;
	unsigned int i;
	unsigned int count = 0;

	newnodes = malloc(sizeof(list_t));
	if (newnodes == NULL)
		return (NULL);
	newnodes->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnodes->len = count;
	newnodes->next = *head;
	*head = newnodes;

	return (*head);
}
