#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog pointer
 * @name: initializes the name
 * @age: initializes the age
 * @owner: init the owner
 *
 * Return: nthing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
