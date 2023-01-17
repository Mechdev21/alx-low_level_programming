#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct
 * @d: pointer to structure
 * @name: second parameter
 * @age: third parameter
 * @owner: fourth parameter
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *c = d;

	if (c == NULL)
		;

	else
	{
		c->name = name;
		c->age = age;
		c->owner = owner;
	}
}
