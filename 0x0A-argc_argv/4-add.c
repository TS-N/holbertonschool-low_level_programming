#include "holberton.h"

/**
 * is_clean - a function that test if a string contains other than digits
 * @s: the string to test
 *
 * Return: 0 if else than digits are found, 1 otherwise
 **/
int	is_clean(char *s)
{
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			++s;
		else
			return (0);
	}
	return (1);
}

/**
 * main -  a program that adds positive numbers
 * @ac: the number of args
 * @av: the args
 *
 *Return: 1 if error, 0 otherwise
 **/
int	main(int ac, char **av)
{
	unsigned int  n = 0;

	if (ac == 1)
	{
		printf("0\n");
		return (0);
	}
	while (ac > 1)
	{
		if (is_clean(av[ac - 1]))
			n += atoi(av[ac - 1]);
		else
		{
			printf("Error\n");
			return (1);
		}
		--ac;
	}
	printf("%u\n", n);
	return (0);
}
