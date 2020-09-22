#include <stdio.h>

/**
* main - entry point
*
* Return: nothing
**/
int	main(void)
{
	int		i;
	int		n1;
	int		n2;
	int		n;
	int		sum;

	i = 1;
	sum = 0;
	n = 0;
	n1 = 0;
	n2 = 1;
	while (n <= 4000000)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		if (!(n % 2))
			sum += n;
	}
	printf("%d\n",sum);
	return (0);
}
