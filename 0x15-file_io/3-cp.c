#include "holberton.h"

/**
  * read_loop - for betty compliance
  * @fd_from: the input fd
  * @fd_to: the output fd
  * @buf: the buffer
  * @av: av
  **/
void	read_loop(int fd_from, int fd_to, char *buf, char **av)
{
	ssize_t	r = 1;

	while (r)
	{
		r = read(fd_from, buf, BUF_SIZE);
		if (r == -1)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (write(fd_to, buf, r) == -1)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: the number of args
 * @av: the passed arguments
 * Return: always 0
 **/
int	main(int ac, char **av)
{
	char	buf[BUF_SIZE];
	int	fd_from;
	int	fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_TRUNC | O_CREAT | O_APPEND | O_WRONLY, 00664);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	read_loop(fd_from, fd_to, buf, av);
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
