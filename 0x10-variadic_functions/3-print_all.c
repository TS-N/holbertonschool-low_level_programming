#include "variadic_functions.h"

/**
  * printf_char - use printf for char
  * @val: va_list
  **/
void	printf_char(va_list val)
{
	printf("%c", va_arg(val, int));
}

/**
  * printf_int - use printf for int
  * @val: corresponding va_list
  **/
void	printf_int(va_list val)
{
	printf("%d", va_arg(val, int));
}

/**
  * printf_float - use printf for float
  * @val: correspondong va_list
  **/
void	printf_float(va_list val)
{
	printf("%f", va_arg(val, double));
}

/**
  * printf_string - use printf for string
  * @val: corresponding va_list
  **/
void	printf_string(va_list val)
{
	char	*tmp;

	tmp = va_arg(val, char *);
	if (!tmp)
		tmp = "(nil)";
	printf("%s", tmp);
}

/**
 * print_all - a function that prints anything
 * @format:i a list of types of arguments passed to the function
 **/
void print_all(const char * const format, ...)
{
	va_list		valist;
	type_l		t_list[] = {
		{'c', printf_char},
		{'i', printf_int},
		{'f', printf_float},
		{'s', printf_string},
		{0, 0}};
	char		*bs;
	unsigned int	i;
	unsigned int	j;

	va_start(valist, format);
	i = 0;
	bs = "";
	while (format[i])
	{
		j = 0;
		while (t_list[j].c)
		{
			if (t_list[j].c == format[i])
			{
				printf("%s", bs);
				bs = ", ";
				t_list[j].func(valist);
			}
			++j;
		}
		++i;
	}
	printf("\n");
	va_end(valist);
}
