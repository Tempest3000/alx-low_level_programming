#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lower case
 * and the in uppercase, follow by a new line
 * Return: o
 */
int main(void)
{
	char C = 'a';

	while (C <= 'z')
	{
		putchar(C);
		C++;
	}

	C = 'A';

	while (C <= 'Z')
	{ 
		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}
