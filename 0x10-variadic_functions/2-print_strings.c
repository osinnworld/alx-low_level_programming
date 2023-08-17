#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: printed string
 * @n: number of strings passed to func
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list strings;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
