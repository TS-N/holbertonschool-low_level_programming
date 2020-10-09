#include "holberton.h"

/**
 * main - a program that multiplies two number
 * @ac: the number of args
 * @av: the args
 *
 *Return: 1 if error, 0 otherwise
 **/
int	main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(av[1]);
	b = atoi(av[2]);
	printf("%d\n", a * b);
	return (0);
}
