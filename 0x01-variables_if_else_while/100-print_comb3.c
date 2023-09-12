#include <stdio.h>

/**
 * main - print number combination separated by comma and full stop
 *
 * Description: print two digit numbers in ascending order
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 48;
	int j = 49;

	while (i < 58)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 57 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}

		i++;

	}

	putchar(10);

	return (0);
}
