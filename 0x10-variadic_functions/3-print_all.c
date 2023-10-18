#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function
 * @...: number of arguments entered
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string;
	char separator = '\0';
	int character;
	double float_num;
	int integer;


	va_list options;

	va_start(options, format);

		while (format[i])
		{
			if (separator)
				printf("%c", separator);

			switch(format[i])
			{
				case 'c':
					character = va_arg(options, int);
					printf("%c, ", character);
					break;

				case 'i':
					integer = va_arg(options, int);
					printf("%d, ", integer);
					break;

				case 'f':
					float_num = va_arg(options, double);
					printf("%f, ", float_num);
					break;

				case 's':
					string = va_arg(options, char *);

					if (string == NULL)
						printf("nil");
					printf("%s, ", string);
					break;

				default:
					break;
			}
			separator = ',';
			i++;
		}
	printf("\n");
	va_end(options);
}
