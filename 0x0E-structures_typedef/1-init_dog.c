#include "dog.h"

/**
  * init_dog - a function that initialize a variable of type struct dog
  * @d: the struct
  * @name: as you guessed
  * @age: as you guessed
  * @owner: as you guessed
  **/
void	init_dog(struct dog *d, char *nam, float age, char *owner)
{
	d->name = nam;
	d->age = age;
	d->owner = owner;
}
