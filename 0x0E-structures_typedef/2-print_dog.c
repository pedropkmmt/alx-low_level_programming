#include <stdio.h>
#include "dog.h"
/**
 * print_dog - main function
 * @struct dog - structure
 * @d - pointer
 */
void print_dog(struct dog *d)
{
	if ( d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)")
	}
}
