#include "variadic_functions.h"

/**
 * print_strings - Print strings separated by a specified separator,
 * followed by a new line
 * @separator: the string to be printed between strings if not null
 * @n: the number of strings
 * @...: The strings to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	prinf("\n");

	va_end(args);
}
