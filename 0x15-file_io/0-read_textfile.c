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
	int fp, ret;
	char buffer[BUFFER_SIZE + 1];
	size_t cp = 1;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	while ((ret = read(fp, buffer, letters)))
	{
		buffer[ret] = '\0';
		printf("%s", buffer);
		cp = cp + ret;
	}

	close(fp);
	return (cp - 1);
}

