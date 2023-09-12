#include "main.h"

/**
 * print_alphabet - print out the alphabet in small letters
 *
 * Return: Always 0 (Success)
 */

int print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);

		i++;
	}

	_putchar('\n');

	return (0)i;
}
