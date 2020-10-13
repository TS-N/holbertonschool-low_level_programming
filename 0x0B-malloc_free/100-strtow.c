#include "holberton.h"

/**
  * wrdcnt - counts the number to words in a string delimetered bu delim
  * @str: the string in which to count the words
  * @delim: the words delimeter
  *
  * Return: the number of words
  **/
int	wrdcnt(char *str, char delim)
{
	int	nb;

	if (!str)
		return (0);
	nb = 0;
	while (*str)
	{
		if (*str == delim)
		{
			while (*str == delim)
				++str;
		}
		else
		{
			++nb;
			while (*str && *str != delim)
				++str;
		}
	}
	return (nb);
}

/**
  * alloc_word - recursively allocate and fill a string with the next word\
   delimetered by ' '
  * @ri: the address of the pointer to the string
  * @str: the string in which to find the word
  * @len: the lenght of the word
  *
  * Return: 0 if error, 1 otherwise
  **/
int	alloc_word(char **ri, char *str, int len)
{
	if (*str && *str != ' ')
		alloc_word(ri, str + 1, len + 1);
	else
	{
		*ri = malloc(len + 1);
		if (!*ri)
			return (0);
		(*ri)[len] = '\0';
		return (1);
	}
	(*ri)[len] = *str;
	return (1);
}

/**
  * strtow - a function that splits a string into words (the delim is ' ')
  * @str: the string in which to find the words
  *
  * Return: a newly allocated list of words found in str
  **/
char	**strtow(char *str)
{
	char	**r;
	int	wrdnb;
	int	i;

	wrdnb = wrdcnt(str, ' ');
	r = malloc((wrdnb + 1) * sizeof(char *));
	if (!r)
		return (0);
	r[wrdnb] = 0;
	i = 0;
	while (*str)
	{
		while (*str && *str == ' ')
			++str;
		if (*str && !alloc_word(r + i, str, 0))
		{
			while (i >= 0)
				free(r[i--]);
			free(r);
			return (0);
		}
		++i;
		while (*str && *str != ' ')
			++str;
	}
	return (r);
}
