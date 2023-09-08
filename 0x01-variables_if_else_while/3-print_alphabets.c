#include <stdio.h>

/**
 * main - print the letters in capital letters
 *
 * Description: print the letters in capital letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
