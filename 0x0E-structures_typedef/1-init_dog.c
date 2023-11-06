#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: object input
 * @name: char input
 * @age: integer input
 * @owner: char input
 *
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
