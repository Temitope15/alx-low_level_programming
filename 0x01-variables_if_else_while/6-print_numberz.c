#include <stdio.h>

/**
 * main -  print single digits of base 10 starting from 0
 *
 * Description: print single digits of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
