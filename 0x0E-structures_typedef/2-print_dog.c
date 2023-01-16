#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - a function that prints struct dog
 * @d: a pointer to struct dog
 *
 * Return - nothing
 */

void print_dog(struct dog *d)
{
	struct dog *c = d;

	if (c == NULL)
		printf("\n");

	if (c->name == NULL)
		printf("name is NULL");
	else
		printf("Name: %s\n", c->name);

	if (c->age <= 0)
		printf("age is NULL");
	else
		printf("Age: %f\n", c->age);

	if (c->owner == NULL)
		printf("owner is NULL");
	else
		printf("Owner: %s\n", c->owner);
}
