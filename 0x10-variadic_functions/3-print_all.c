#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format:i a list of types of arguments passed to the function
 **/
void print_all(const char * const format, ...)
{
	va_list		valist;
	type_l		t_list[] = {
		{'c', "%c"},
		{'i', "%d"},
		{'f', "%f"},
		{'s', "%s"},
		{0, 0}};
	void		*tmp;
	unsigned int	i;
	unsigned int	j;

	va_start(valist, format);
	i = 0;
	while (format[i])
	{
		j = 0;
		while (t_list[j].c)
		{
			if (t_list[j].c == format[i])
			{
				tmp = va_arg(valist, void *);
				if (tmp == 0 && t_list[j].c == 's')
					tmp = "(nil)";
				printf(t_list[j].f, tmp);
			}
			++j;
		}
		++i;
	}
	printf("\n");
}
