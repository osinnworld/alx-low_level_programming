#include "main.h"

#define BUFFER_SIZE 9096

/**
 * read_textfile - func
 * @filename: list
 * @letters: number
 *
 * Return: 1 or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t wrt;
	ssize_t rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	rd = read(fd, buf, letters);
	wrt = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
