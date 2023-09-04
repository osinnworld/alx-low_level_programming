#include "main.h"

/**
 * create_file - a func
 * @filename: parameter
 * @text_content: parameter
 *
 * Return: 1 or 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR, 600);

	if (fd == -1)
		return (-1);

	chmod(filename, 644);

	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
