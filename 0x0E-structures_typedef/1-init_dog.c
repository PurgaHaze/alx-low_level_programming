#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: the dog
 * @name:The name of the dog
 * @age:The dogs age
 * @owner: The dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
