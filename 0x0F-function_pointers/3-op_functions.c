#include "3-calc.h"

/**
 * op_add - calculates sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides the two ints
 * @a: first int
 * @b: secon int
 *
 * Return: result of a over b
 */

int op_div(int a, int b)
{
	return  (a / b);
}

/**
 * op_mod - modulo of a and b
 * @a: fist int
 * @b: second int
 *
 * Return: result of mod a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
