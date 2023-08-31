#include <unistd.h>

/**
 * _putchar - prints char
 * @c: char to print
 *
 * Return: Always 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
