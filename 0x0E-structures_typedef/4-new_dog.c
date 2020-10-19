#include "dog.h"

/**
 * _strcpy - copy a source string to dest including null terminator
 *@src: the source string
 *@dest: the destination string
 *
 *Return: pointer to the dest string
 **/
char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest + i && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = src[i];
	return (dest);
}

/**
 * _strlen - gives the length of a string
 * @s: the string from whitch len is found
 *
 * Return: the len of the string
 **/
int	_strlen(char *s)
{
	int	l = 0;

	while (*s++)
		++l;
	return (l);
}

/**
 * _strdup - a function that returns a pointer to a newly allocated \
 space in memory, which contains a copy of the string given as a parameter
 * @str: the string to dupplicate
 *
 * Return: the newly created duplicate string
 **/
char	*_strdup(char *str)
{
	char	*dup;

	if (!str)
		return (0);
	dup = malloc(_strlen(str) + 1);
	if (!dup)
		return (0);
	dup = _strcpy(dup, str);
	return (dup);
}

/**
 * new_dog - creates a new instance of struct dog
 *@name: the name of the dog
 *@age: the age fo the dog
 *@owner: the owner of the dog
 *
 *Return: the new struct dog
 **/
dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t	*new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (0);
	new->name = _strdup(name);
	if (!new->name)
	{
		free(new);
		return (0);
	}
	new->age = age;
	new->owner = _strdup(owner);
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (0);
	}
	return (new);
}
