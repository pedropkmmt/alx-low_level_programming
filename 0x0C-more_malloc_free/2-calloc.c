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
	char *output;
	 output = calloc(nmemb, size);

	if (nmemb == 0 || size == 0)
		return (NULL)
	else
		return (output);
}
