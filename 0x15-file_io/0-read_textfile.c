#include "main.h"

/**
 * read_textfile - Reads file & prints to POSIX std output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ret;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	ret = read(fd, buf, letters);
	if (ret == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	if (write(STDOUT_FILENO, buf, ret) != ret)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (ret);
}
