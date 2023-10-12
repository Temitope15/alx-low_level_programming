#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings separated by a specified separator,
 * followed by a new line
 * @separator: the string to be printed between strings if not null
 * @n: the number of strings
 * @...: The strings to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		const char *str = va_args(args, const char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			prinf("%s", separator);
		}
	}

	prinf("\n");

	va_end(args);
}
