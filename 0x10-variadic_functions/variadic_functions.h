#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct type_list - a struct linking a char with a format specifier
 * @c: the char
 * @func: the corresponding printf func with correct va_arg type
 **/
typedef	struct	type_list
{
	char	c;
	void	(*func)(va_list);
} type_l;

int	_putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
