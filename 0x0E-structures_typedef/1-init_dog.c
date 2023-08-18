#include"dog.h"
/**
 * init_dog - test
 * d: test
 * @name: test
 * @age:test
 * owner:test
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
