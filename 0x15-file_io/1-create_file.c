
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_file - creates a file
 * and also writing the file
 * @filename: the file name to create
 * @text_content: content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ret, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	ret = write(fd, text_content, len);
	if (ret == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}

