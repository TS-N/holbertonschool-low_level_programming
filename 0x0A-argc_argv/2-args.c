#include "holberton.h"

/**
 * main - a program that prints all arguments it receives
 * @ac: the number of args
 * @av: the args
 *
 *Return: 0
 **/
int	main(int ac, char **av)
{
	int	i = 0;

	while (i < ac)
		printf("%s\n", av[i++]);
	return (0);
}
