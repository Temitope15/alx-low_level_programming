#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets in small letter 10 times
 *
 * Return: Always 0 (Success)
 */

int print_alphabet_x10(void)
{
	int end = 10;

	int i = 0;

	while (i < end)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);

			j++;
		}

		_putchar('\n');

		i++;
	}

	return (0);
}
