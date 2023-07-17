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
typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);



#endif
