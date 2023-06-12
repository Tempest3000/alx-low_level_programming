#include <unlistd.h>
#include "main.h"

/**
 * _putchar - write the character c to stdiout
 * @c: character to print
 * Return: Or Success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
