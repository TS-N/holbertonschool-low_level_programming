#include "holberton.h"

/**
 * _strlen - gives the length of a string
 * @s: the string from whitch len is found
 *
 * Return: the len of the string
 **/
int	_strlen(char *s)
{
	int	l = 0;

	if (!s)
		return (0);
	while (*s++)
		++l;
	return (l);
}

/**
 * _strcat -  a function that concatenates two strings
 *@dest: destination string
 *@src: source string
 *
 * Return: the cat string
 **/
char	*_strcat(char *dest, char *src)
{
	char	*buf;

	if (!dest || !src)
		return (dest);
	buf = dest;
	while (*buf)
		++buf;
	while (*src)
	{
		*buf = *src;
		++buf;
		++src;
	}
	*buf = 0;
	return (dest);
}

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: the number of arguments
 * @av: the arguments as strings
 *
 * Return: a string of concat args
 **/
char	*argstostr(int ac, char **av)
{
	char	*str;
	int	totlen;
	int	i;

	if (!ac || !av)
		return (0);
	i = 0;
	totlen = 0;
	while (++i < ac)
		totlen += _strlen(av[i]) + 1;
	str = malloc(totlen + 1);
	if (!str)
		return (0);
	i = 0;
	while (++i < ac)
	{
		_strcat(str, av[i]);
		_strcat(str, "\n");
	}
	return (str);
}
