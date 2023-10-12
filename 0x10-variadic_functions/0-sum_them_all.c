#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: the number of args
 * @...: The integer values to be summed
 *
 * Return: the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);

	int total = 0;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		total += va_args(args, int);
	}

	va_end(args);

	return (total);
}
