#include <stdio.h>

/**
* main - entry point
*
* Return: nothing
**/
int	main(void)
{
	int		i;
	long int	n1;
	long int	n2;
	long int	n;

	i = 0;
	n1 = 0;
	n2 = 1;
	while (i <= 50)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		printf("%lu", n);;
		if (!(i == 50))
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
