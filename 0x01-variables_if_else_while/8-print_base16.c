#include <stdio.h>

/**
 * main - print all the hexadecimal numbers
 *
 * Description: print all the hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
			putchar('0' + i);
		else
			putchar('a' + (i -10));
		i++;
	}

	putchar(10);

	return (0);
}
