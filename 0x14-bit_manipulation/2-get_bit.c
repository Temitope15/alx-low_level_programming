#include "main.h"

/**
 * get_bit - Get the value of a bit at the given index.
 * @n: The number.
 * @index: Index starting from 0 of the bit required.
 *
 * Return: The value of the bit at the specified index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
