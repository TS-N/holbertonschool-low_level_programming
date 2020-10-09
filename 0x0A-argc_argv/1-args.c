#include "holberton.h"

/**
 * main -  a program that prints the number of arguments passed into it
 * @ac: the number of args
 * @av: the args
 *
 *Return: 0
 **/
int	main(int ac, char **av)
{
	(void)av;
	printf("%d\n", ac - 1);
	return (0);
}
