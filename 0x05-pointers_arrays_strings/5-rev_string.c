#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: the string to reverse
 *
 **/
void	rev_string(char *s)
{
	char *sr;
	char c;

	sr = s;
	while (*sr)
		++sr;
	--sr;
	while (s < sr && *s)
	{
		c = *s;
		*s = *sr;
		*sr = c;
		++s;
		--sr;
	}
}
