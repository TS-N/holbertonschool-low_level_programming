#include "dog.h"

/**
  * print_dog - print the struct dog
  * @d: the struct to print
  **/
void print_dog(struct dog *d)
{
	char	*s;

	if (!d)
		return;
	s = d->name ? d->name : "(nil)";
	printf("Name: %s\n", s);
	printf("Age: %f\n", d->age);
	s = d->owner ? d->owner : "(nil)";
	printf("Owner: %s\n", s);
}
