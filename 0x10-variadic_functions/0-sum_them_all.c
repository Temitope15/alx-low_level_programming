#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: the number of args
 * @...: The integer values to be summed
 *
 * Return: the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i; 
	int total = 0;

	va_list args;

	va_start (args, n);

	if (n == 0)
		return (0);


	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}

	va_end(args);

	return (total);
}
