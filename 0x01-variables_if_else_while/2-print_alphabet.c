#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random it with 5
 * Return: 0
 */
int main(void)
{

	char C = 'a';

	while (C <= 'z')
	{
		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}
