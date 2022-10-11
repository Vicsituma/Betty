#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: dog instance
 * Return: none
*/
struct dog *my_dog(char *name, char *owner, float age)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	if (name)
		d->name = name;
	else
		d->name = "nil";
	if (age)
		d->age = age;
	else
		d->age = "nil";
	if (owner)
		d->owner = owner;
	else
		d->owner = "nil";
}
void print_dog(struct dog *d)
{
	d = my_dog(char *name, char *owner, float age);
	printf("Name: %s\n", name);
	printf("Age: %f\n", age);
	printf("Owner: %s\n", owner);
}
