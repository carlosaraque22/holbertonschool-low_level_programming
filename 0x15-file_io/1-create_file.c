#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - this function creates a file.
 *
 * @filename: this is the name of the file.
 * @text_content: this is a NULL terminated string.
 *
 * Return: return 1 on success or -1 if fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 00600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		write(fd, text_content, len);
	}
	close(fd);
	return (1);
}
