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
	unsigned char	*f;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	nb = atoi(av[1]);
	if (nb < 0)
	{
		printf("Error\n");
		return (2);
	}
	i = 0;
	f = (unsigned char *)(*main);
	while (i < nb)
	{
		if (i)
			printf(" ");
		if (*f == 0xc3)
		{
			printf("%.2x", *f);
			break;
		}
		printf("%.2x", *(f));
		++f;
		++i;
	}
	printf("\n");
	return (0);
}
