#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a new type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns the dpog
 *
 * Description: used to create a custom data type called dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif