#include "dog.h"

/**
  * free_dog - free the struct dog created with dog_init
  * @d: the strcut to free
  **/
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
