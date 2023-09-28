#include "main.h"

/**
 * set_bit - func
 * @n: parameter
 * @index: parameter
 *
 * Return: 1 or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
