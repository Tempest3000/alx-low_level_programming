#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * starting from 0, followed by new line.
 * Return: 0
 */
int main(void)
{
	int C = 0;

	while (C < 10)
	{
		putchar(48 + C);
		C++;
	}

	putchar('\n');
	return (0);
}
