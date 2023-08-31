#include "main.h"

int puis(int x, int y);
int _atoi(char *str);

/**
 * binary_to_uint - funct
 * @b: parameter
 *
 * Return: 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int n = 0, i = 0, cp = 0, test;
	char c;

	if (b == NULL)
		return (0);

	while (b[1])
		i++;
	i--;

	while (i >= 0)
	{
		test = (b[i] == '0' || b[i] == '1');
		if (!test)
		{
			return (0);
		}
		c = b[i];
		n = n + _atoi(&c) * puis(2, cp);
		i--;
		cp++;
	}
	return (n);
}

/**
 * puis - calculate x puissance y
 * @y: num
 * @x: num
 *
 * Return: 0 or 1
 */
int puis(int x, int y)
{
	int n = 1, i;

	for (i = 0; i < y; i++)
		n = n * x;

	return (n);
}

/**
 * _atoi - converts strg to int
 * @str: parameter
 *
 * Return: int
 */
int _atoi(char *str)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (str[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (str[i] == '-')
			++d;

		if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (str[i + 1] < '0' || str[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
