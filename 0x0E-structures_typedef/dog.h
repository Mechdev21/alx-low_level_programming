#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - defines a new type
 * @name: of type char
 * @age: type char
 * @owner: type char
 *
 * Return: nothing
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
