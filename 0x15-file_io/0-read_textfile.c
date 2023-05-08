#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: the file to read
 * @letters: no. of letters to read and print
 *
 * Return: no. of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t bytes_read = 0;
int fd;
char *buf;

if (!filename)
	return 0;

fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);

buf = malloc(letters);
if (!buf)
{
close(fd);
return (0);
}

bytes_read = read(fd, buf, letters);
if (bytes_read == -1)
{
free(buf);
close(fd);
return (0);
}

if (write(STDOUT_FILENO, buf, bytes_read) != bytes_read)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);
return (bytes_read);
}

