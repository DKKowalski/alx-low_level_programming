
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>


/**
 * append_text_to_file - Appends text to a file.
 * @filename: The name of the file to append.
 * @text_content: The NULL-terminated
 * string to append to the file.
 *
 * Return: 1 on success, or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	res = write(fd, text_content, len);
	close(fd);

	if (res == -1)
		return (-1);

	return (1);
}

