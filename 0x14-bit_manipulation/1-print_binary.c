#include "holberton.h"

/**
  * print_bin - prints binary
  * @n: the number to print
  **/
void	print_bin(unsigned long int n)
{
	if (!n)
		return;
	print_bin(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

/**
  * print_binary - prints the binary representation of a number
  * @n: the number to print in decimal
  **/
void	print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	else
		print_bin(n);
}
