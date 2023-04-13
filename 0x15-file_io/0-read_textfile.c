#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
* read_textfile - Reads a test file and prints it to the POSIX standard out.
* @filename: the name of the file
* @letters: number of letters it should read and print.
* Return: 0 if the file can not be opened or read,
* 0 if filename is NULL, 0 if write() fails or does not write the the expected
* amount of bytes.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nb_read = 1, nb_written;
	size_t n = 0;
	int fd_open;
	char c;

	if (filename == NULL || letters == 0)
		return (0);
	fd_open = open(filename, O_RDONLY, 0);
	if (fd_open < 0)
		return (0);
	while (n <= letters)
	{
		if (n == letters)
			return (n);
		nb_read = read(fd_open, &c, 1);
		if (nb_read < 0)
			return (0);
		if (nb_read == 0)
		{
			if (n == letters)
				return (n);
			else
				return (0);
		}
		nb_written = write(STDOUT_FILENO, &c, 1);
		if ((nb_written < 0) || (nb_written != nb_read))
			return (0);
		n++;
	}
	close(fd_open);

	return (0);
}
