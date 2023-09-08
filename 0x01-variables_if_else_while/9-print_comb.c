#include <stdio.h>

/**
 * main - prints numbers sepaated by comma and space
 *
 * Description: prints 0 - 9 separated with comma and space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar(10);

	return (0);
}
