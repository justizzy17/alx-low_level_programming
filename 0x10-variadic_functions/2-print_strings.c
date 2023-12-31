#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  function that prints strings, followed by a new line.
 * @separator:  string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: number of arguments passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);

		if (string == NULL)
			printf("nil");

		printf("%s", string);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	
	printf("\n");
	va_end(ap);
}
