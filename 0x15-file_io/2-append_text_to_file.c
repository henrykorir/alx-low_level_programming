#include <string.h>
#include <fcntl.h>
#include "main.h"
/**
* append_text_to_file - appends text at the end of a file.
* @filename: the name of the file to append text in.
* @text_content: NULL terminated string to add at the end of the file.
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nb_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	nb_written = write(fd, text_content, strlen(text_content));
	if (nb_written != (int)strlen(text_content))
		return (-1);
	close(fd);
	return (1);
}
