#include "3-calc.h"

int	main(int ac, char **av)
{
	int	(*op_func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op_func = get_op_func(av[2]);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	if ((av[2][0] == '/' || av[2][0] == '%') && atoi(av[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_func(atoi(av[1]), atoi(av[3])));
	return (0);
}
