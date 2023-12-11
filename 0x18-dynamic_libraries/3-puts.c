#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: The input string to print.
 *
 * Description: This function prints a string character by character,
 * followed by a new line.
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
