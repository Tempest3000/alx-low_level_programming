#include "main.h"

/**
 * _pow_recursion - search string for any of a set of bytes
 * @x: value to raise
 * @y: power
 * Return: pointer to byte in 's' that matches one of the bytes in 'accept'
 * or NULL if no such byte is found
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
