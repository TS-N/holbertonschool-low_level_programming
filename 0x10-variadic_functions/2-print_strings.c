#include "variadic_functions.h"

/**
  * print_strings - a function that prints strings, followed by a new line
  * @separator: the string to be printed between the strings
  * @n: the number of args
  **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list		valist;
	char		*tmp;
	unsigned int	i;

	if (!separator)
		separator = "";
	i = 0;
	va_start(valist, n);
	while (i < n)
	{
		tmp = va_arg(valist, char *);
		if (!tmp)
			tmp = "(nil)";
		if (i)
			printf("%s", separator);
		printf("%s", tmp);
		++i;
	}
	printf("\n");
}
