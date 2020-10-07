#include "holberton.h"

int	_strlen_recursion(char *s);

/**
  * palilap - function that tells if palindrome or not
  * @s1: the beginning of the string
  * @s2: the end of the same string
  *
  * Return: 1 if the string is a palindrome, 0 otherwise
  **/
int	palilap(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);
	else if (s1 == s2 || (*(s1 + 1) == *s2 && *(s2 - 1) == *s1))
		return (1);
	else
		return (palilap(s1 + 1, s2 - 1));
}

/**
 * is_palindrome - a function that tells if a string is a palindrome
 * @s: the string to test
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 **/
int	is_palindrome(char *s)
{
	return (palilap(s, s + _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - gives the length of a string
 * @s: the string from whitch len is found
 *
 * Return: the len of the string
 **/
int	_strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
