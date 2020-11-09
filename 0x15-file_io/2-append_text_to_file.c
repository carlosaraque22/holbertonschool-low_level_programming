#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: this is the name of the file.
 * @text_content: a NULL terminated string.
 *
 * Return: return 1 in case of success, or -1 if fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY, 00600);

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
