#include <stdio.h>
/**
 * main - main block
 * Description: get a random number and check its
 * Return: 0
 */
int main(void)
{
	char C = 'a';

	while (C <= 'z')
	{
		if (C != 'e' && C != 'q')
		{
			putchar(C);
		}
		C++;
	}
	putchar('\n');
	return (0);
}
