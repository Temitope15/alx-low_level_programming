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
	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("/n");

	va_end(args);
}
