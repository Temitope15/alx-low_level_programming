#include <stdio.h>

/**
 * main - prints program name and its arguments
 * @argc: argument counter
 * @argv: argument array
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}

	printf("\n");

	return (0);
}
