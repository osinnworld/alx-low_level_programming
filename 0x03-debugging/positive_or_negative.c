#include "main.h"

/**
 * positive_or_negative - Determine if number is +ve, -ve or zero
 * @i: The number to be checked
 *
 * Return: Always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
}
