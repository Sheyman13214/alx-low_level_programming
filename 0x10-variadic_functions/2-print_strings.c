#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Function that prints strings,
 * followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function
 * @...: A variable number of strings to be printed
 * Description: If separator is NULL, it is not printed,
 * if one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ss;
	char *stri;
	unsigned int index;

	va_start(ss, n);

	for (index = 0; index < n; index++)
	{
		stri = va_arg(ss, char *);

		if (stri == NULL)
			printf("(nil)");
		else
			printf("%s", stri);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ss);
}
