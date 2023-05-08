
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#define BUFFER_SIZE 1024

/**
 * error_exit - outputs an error msg
 * and exits with the given code
 * @exit_code: the exit code
 * @format: the error message format string
 */
void error_exit(int exit_code, const char *format, ...)
{
    va_list args;

    va_start(args, format);
    dprintf(STDERR_FILENO, "Error: ");
    vdprintf(STDERR_FILENO, format, args);
    va_end(args);

    exit(exit_code);
}

/**
 * main - copying content of one file to another file
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 on success, or an exit code on failure
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, ret_read, ret_write;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to\n");

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Can't read from file %s\n", argv[1]);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
        error_exit(99, "Can't write to %s\n", argv[2]);

    while ((ret_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        ret_write = write(fd_to, buffer, ret_read);
        if (ret_write != ret_read)
            error_exit(99, "Can't write to %s\n", argv[2]);
    }

    if (ret_read == -1)
        error_exit(98, "Can't read from file %s\n", argv[1]);

    if (close(fd_from) == -1)
        error_exit(100, "Can't close fd %d\n", fd_from);

    if (close(fd_to) == -1)
        error_exit(100, "Can't close fd %d\n", fd_to);

    return (0);
}

