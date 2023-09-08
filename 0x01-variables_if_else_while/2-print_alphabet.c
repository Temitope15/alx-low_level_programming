#include <stdio.h>

/**
 * main - print alphabets in small letters
 *
 * Description: print alphabets in small letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
