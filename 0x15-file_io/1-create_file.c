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
	int f;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_RDWR, 600);

	if (f == -1)
		return (-1);

	chmod(filename, 644);

	if (text_content != NULL)
		write(f, text_content, strlen(text_content));
	close(f);
	return (1);
}
