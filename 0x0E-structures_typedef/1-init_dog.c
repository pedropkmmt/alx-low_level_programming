#include <stdio.h>
#include "dog.h"
struct dog
{
        char *name;
        float age;
        char *owner;
};

/*
 * int_dog- main function
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d;

	d.name = "Poppy";
	d.age = 4;
	d.owner = "Bob";
	return (0);
}
