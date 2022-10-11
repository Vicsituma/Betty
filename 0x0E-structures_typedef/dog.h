#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - dog's data
 * @name: dog's name
 * @owner: name of owner
 * @age: dog's age
*/

struct dog
{
	char *name;
	char *owner;
	float age;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
