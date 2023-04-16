#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_and_write - reads from a fildes and writes to.
 * another fildes.
 * @fd_read: fildes to read from.
 * @fd_write: filedes to write to
 * @file_from: the name of the source file.
 * @file_to: file name of the destination file
 * Return: nothing.
 */
void read_and_write(int *fd_read, int *fd_write,
const char *file_from, const char *file_to)
{
	int nb_read, nb_write;
	char buffer[1024];

	nb_read = read(*fd_read, buffer, 1024);
	while (nb_read > 0)
	{
		if (nb_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		nb_write = write(*fd_write, buffer, nb_read);
		if ((nb_write < 0) || (nb_write != nb_read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		nb_read = read(*fd_read, buffer, 1024);
	}
	if (nb_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
}
/**
 * main - Entry point
 * @argc: number of command lines
 * @argv: command lines.
 * Return: Always 0 (success)
 * Description: the code copies bytes from one file
 * to the other
 */
int main(int argc, char *argv[])
{
	int fd_read, fd_write, status;

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
	}
	fd_read = open(argv[1], O_RDONLY, 0);
	if (fd_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_write < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	read_and_write(&fd_read, &fd_write, argv[1], argv[2]);
	status = close(fd_write);
	if (status < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
	status = close(fd_read);
	if (status < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		exit(100);
	}
	return (0);
}
