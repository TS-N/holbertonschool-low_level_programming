#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int	main(void)
{
	char	*str;

	str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	while (*str)
	{
		write(1, str, 1);
		write(2, str, 1);
		str++;
	}
	return (1);
}
