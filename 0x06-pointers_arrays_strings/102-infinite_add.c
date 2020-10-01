#include "holberton.h"

/**
 * _strlen - gives the length of a string
 * @s: the string from whitch len is found
 *
 * Return: the len of the string
 **/
int	_strlen(char *s)
{
	int	l = 0;

	while (*s++)
		++l;
	return (l);
}

/**
  * remain - recursively gets if the total will have a remainder
  * @n1: number one to add
  * @n2: number two to add
  * @l1: lengh of n1
  * @l2: lengh of n2
  * @i: a incrementor that will serve as index throughout the recursion
  *
  * Return: the remainder of the addition of current digit
**/
int	remain(char *n1, char *n2, int l1, int l2, int i)
{
	int	r;

	r = n1[i] - 48;
	if (i >= l1 - l2)
		r += n2[i - (l1 - l2)] - 48;
	if (i < l1 - 1)
		r += remain(n1, n2, l1, l2, i + 1);
	return (r / 10);
}

/**
  * do_magic - recursively fill the destination string based on total remainder
  * @n1: number one to add
  * @n2: number two to add
  * @dest: where to fill the addition result string
  * @l1: lengh of n1
  * @l2: lengh of n2
  * @i: a incrementor that will serve as index throughout the recursion
  * @p: the shift based on total remainder
  *
  * Return: the remainder of the addition of current digits
  **/
int	do_magic(char *n1, char *n2, char *dest, int l1, int l2, int i, int p)
{
	int	r;

	r = n1[i] - 48;
	if (i >= l1 - l2)
		r += n2[i - (l1 - l2)] - 48;
	if (i < l1 - 1)
		r += do_magic(n1, n2, dest, l1, l2, i + 1, p);
	dest[i + p] = r % 10 + 48;
	return (r / 10);
}

/**
  * infinite_add - add two numbers in string type to another string
  * @n1: the number 1 to add
  * @n2: the second number to add
  * @r: string where the result of the addition will be stored
  * @size_r: the size of r in bytes
  *
  * Return: r or 0 if error
  **/
char	*infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int	l1;
	int	l2;
	int	p;
	int	rem;
	int	res;

	l1 = _strlen(n1);
	l2 = _strlen(n2);
	if (l2 > l1)
		return (infinite_add(n2, n1, r, size_r));
	p = remain(n1, n2, l1, l2, 0);
	if (l1 + p >= size_r)
		return (0);
	r[l1 + p] = 0;
	r[0] = p + '0';
	do_magic(n1, n2, r, l1, l2, 0, p);
	return (r);
}
