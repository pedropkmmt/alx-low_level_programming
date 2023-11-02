#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - main function
 * @nmemb: number of array
 * @size: size of array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	 i= calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
