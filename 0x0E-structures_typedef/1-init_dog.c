#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: Name to initialize
 * @age: Age to initilaize
 * @owner: Owner to initialize
 * return -  none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
	{
        return;
    }
    d->name = name;
    d->age = age;
    d->owner = owner;
}
