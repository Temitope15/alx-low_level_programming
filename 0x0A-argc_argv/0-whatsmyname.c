#include <stdio.h>

/**
 * main - prints program name and its arguments
 * @argc: argument counter
 * @argv: argument array
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
