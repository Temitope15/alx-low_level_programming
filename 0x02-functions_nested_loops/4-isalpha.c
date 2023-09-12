#include "main.h"

/**
 * _isalpha - detects whether a charcter is an alphabet or not
 *
 * @c: the parameter to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase else return 0
 */

int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
