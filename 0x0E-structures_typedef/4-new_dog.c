#include "dog.h"
/**
 * new_dog - function that creates a new dog.
 * @name: name of dog
 * @age: age
 * @owner: owner
 *
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *try;

	try = malloc(sizeof(dog_t));
	if (try == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(try);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(try);
		free(name);
		return (NULL);
	}

	try->name = name;
	try->age = age;
	try->owner = owner;
	return (try);
}
