#include "holberton.h"

/**
  * set_string - a function that sets the value of a pointer to a char
  * @s: the string to set
  * @to: the string to point at
  **/
void	set_string(char **s, char *to)
{
	*s = to;
}
