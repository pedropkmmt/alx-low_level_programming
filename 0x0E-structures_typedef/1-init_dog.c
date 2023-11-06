#include <stdio.h>
#include "dog.h"
/*
 * init_dog- main function
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 4;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
