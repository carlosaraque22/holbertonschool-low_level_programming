#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * r_error - Prints the read error and exit.
 * @file: pointer to a file name.
 *
 * Return: Nothing.
 */
void r_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * w_error - Prints the write error and exit.
 * @file: pointer to a file name.
 *
 * Return: Nothing.
 */
void w_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * c_error - Prints the close error and exit.
 * @b: bytes.
 *
 * Return: Nothing.
 */
void c_error(int b)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", b);
	exit(100);
}
