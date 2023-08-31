#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 or 1.
 */
int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
