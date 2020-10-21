#include "function_pointers.h"

/**
  * main -  program that prints the opcodes of its own main function
  * @ac: the nb of args
  * @av: the args
  *
  * Return: 0
  **/
int	main(int ac, char **av)
{
	int	nb;
	int	i;
	void	*f;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nb = atoi(av[1]);
	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;
	f = (*main);
	while (i < nb)
	{
		if (i)
			printf(" ");
		printf("%x", *(char *)f & 0xff);
		++f;
		++i;
	}
	printf("\n");
	return (0);
}
