#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - "
			      "Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(*message) - 1;
	ssize_t bytes_written = write(2, message, len);

	if (bytes_written != len)
		return (1);

	return (1);
}

