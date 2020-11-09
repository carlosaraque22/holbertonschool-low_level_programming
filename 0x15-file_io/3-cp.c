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
