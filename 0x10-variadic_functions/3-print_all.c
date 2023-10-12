#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints values based on the format string.
 * @format: A string containing format specifiers for the values
 * to print
 * @...: The values to print.
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	char *separator = "";

	int i = 0;

	char c;

	char *str;

	while (format && format[i])
	{
		c = format[i];

		if (c == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		} else if (c == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		} else if (c == 'f')
		{
			printf("%s%f", separator, va_args(args, double));
		} else if (c == 's')
		{
			str = va_arg(args, char *);

			if (str == NULL)
			{
				str = "(nil)";
			}

			printf("%s%s", separator, str);
		}

		if (c == 'c' || c == 'i' || c == 'f' || c == 's')
		{
			separator = ", ";
		}
		i++;
	}

	printf("\n");

	va_end(args);
}
