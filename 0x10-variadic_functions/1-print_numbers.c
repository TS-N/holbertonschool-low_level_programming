#include "variadic_functions.h"

/**
  * print_numbers -tion that prints numbers, followed by a new line
  * @separator: the string to be printed between numbers
  * @n: the number of args
  **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list		valist;
	unsigned int	i;

	if (!separator)
		separator = "";
	va_start(valist, n);
	i = 0;
	while (i < n)
	{
		if (i)
			printf("%s", separator);
		printf("%d", va_arg(valist, int));
		++i;
	}
	printf("\n");
}
