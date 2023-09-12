#include <stdio.h>

/**
 * main - prints the combination of three digit numbers in ascending order
 *
 * Description: prints the combination of three digit numbers in ascending order
 *
 * Result: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		int j = 49;

		while (j < 58)
		{
			int k = 50;

			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (k < 57)
				{
					putchar(44);
					putchar(32);
				}

				k++;
			}

			j++;
		}

		i++;
	}

	putchar(10);

	return (0);
}
