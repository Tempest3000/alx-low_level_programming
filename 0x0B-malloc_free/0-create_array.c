#include "main.h"

/**
 * create_array - array prints a string
 * @size: number elements array
 * @c: char
 * Return: printer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*Defines values with mallac*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position < size) /*For array*/
		{
			*(buffer + position) = c, position;
		}
		return (buffer);
	}
}
