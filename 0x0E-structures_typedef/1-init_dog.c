#include "dog.h"

/**
  * init_dog - a function that initialize a variable of type struct dog
  * @d: the struct
  * @name: as you guessed
  * @age: as you guessed
  * @owner: as you guessed
  **/
void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
