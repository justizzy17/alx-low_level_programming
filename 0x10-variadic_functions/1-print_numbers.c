#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers -  function that prints numbers, followed by a new line
 * @separator:  string to be printed between numbers
 * @n: number of arguments entered
 * Return: result of the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	unsigned int arg;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, unsigned int);

		printf("%d", arg);

		if (i != n -1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
