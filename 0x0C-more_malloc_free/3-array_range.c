#include "main.h"
#include <stdlib.h>
/**
 * array_range - main function
 * @min: min value
 * @max: max value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, p;
	int *a;

	if (min > max)
		return (NULL);
	p = max - min + 1;
	a = malloc(sizeof(int) *p);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < p; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
