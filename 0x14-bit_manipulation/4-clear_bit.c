#include "main.h"

/**
 * clear_bit - Sets a bit at a position to 0.
 * @n: Number to be used.
 * @index: Position to be cleared.
 *
 * Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
