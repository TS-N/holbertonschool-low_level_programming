#include "holberton.h"
#include <stdio.h>
/**
* main - entry point
*
* Return: always 0
**/
int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (!(i % 3))
			printf("Fizz");
		if (!(i % 5))
			printf("Buzz");
		if (i % 3 && i % 5)
			printf("%d", i);
		printf(" ");
		++i;
	}
	printf("\n");
	return (0);
}
