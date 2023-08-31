#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 or 1.
 */
int get_endianness(void)
{
	int n = 0x01;
	char *c = (char *)&n;

	return (c[0]);
}
