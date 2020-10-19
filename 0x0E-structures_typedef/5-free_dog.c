#include "dogs.h"

/**
  * free_dog - free the struct dog created with dog_init
  * @d: the strcut to free
  **/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
