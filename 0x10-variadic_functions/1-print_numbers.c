#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers separated by a specific separator,
 * followed by a newline.
 * @separator: the string to be printed between numbers if not Null
 * @n: the number of integers
 * @...: the integers to be printed
 */

void print_numbers(const char  *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else if (separator && i == 0)
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", separator, va_arg(args, int));
	}

	va_end(args);

	printf("\n");
}
