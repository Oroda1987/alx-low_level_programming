#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - frees dog
 *
 * @d:dog to be freed
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
