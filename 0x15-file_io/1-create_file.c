#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "main.h"
/**
* create_file - creates a file.
* @filename: the name of the file to create.
* @text_content: NULL terminated string to write to the file.
* Return: 1 on success. -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd, nb_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	nb_written = write(fd, text_content, strlen(text_content));
	if (nb_written < 0 || nb_written != strlen(text_content))
		return (-1);
	close(fd);
	return (1);
}
