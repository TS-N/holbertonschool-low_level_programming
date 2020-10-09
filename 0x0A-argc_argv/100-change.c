#include "holberton.h"

/**
  * main - a program that prints the minimum number of coins \
  to make change for an amount of money
 * @ac: the number of args
 * @av: the args
 *
 *Return: 1 if error, 0 otherwise
 **/
int	main(int ac, char **av)
{
	int	cents;
	int	change[] = {25, 10, 5, 2, 1};
	int	i = 0;
	int	coins = 0;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(av[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents)
	{
		coins += cents / change[i];
		cents = cents % change[i];
		++i;
	}
	printf("%d\n", coins);
	return (0);
}
